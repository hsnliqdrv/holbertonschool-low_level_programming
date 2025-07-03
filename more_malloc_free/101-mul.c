#include "main.h"
#include <stdlib.h>

/**
 * print - prints string
 * @s: string
 */
void print(char *s)
{
	int i = 0;

	while (s[i])
		_putchar(s[i++]);
}
/**
 * _strdup - duplicate given string
 * @str: string
 *
 * Return: if str = null, null
 * if insufficient memory, null
 * if successful, pointer to duplicate
 */
char *_strdup(char *str)
{
	unsigned int l = 0, i;
	char *ptr;

	if (!str)
		return (NULL);
	while (str[l])
		l++;
	ptr = malloc(l + 1);
	if (!ptr)
		return (NULL);
	for (i = 0; i < l; i++)
		ptr[i] = str[i];
	ptr[l] = '\0';
	return (ptr);
}
/**
 * len - length of string
 * @s: string
 *
 * Return: length
 */
int len(char *s)
{
	int l = 0;

	while (s[l])
		l++;
	return (l);
}
/**
 * trim_zeros - trims zeros from start
 * @s: string
 *
 * Return: new string
 */
char *trim_zeros(char *s)
{
	int i = 0;

	while (s[i] == '0')
	{
		i++;
	}
	if ((len(s) == i) && (i > 0))
		i--;
	return (_strdup(s + i));
}
/**
 * add_zeros - addes zeros to end of string
 * @s: string
 * @z: number of zeros
 *
 * Return: new string
 */
char *add_zeros(char *s, int z)
{
	int ls = len(s);
	int l = ls + z, i;

	s = realloc(s, l + 1);
	for (i = ls; i < l; i++)
		s[i] = '0';
	s[l] = '\0';
	return (s);
}

/**
 * zero - zeroes memory
 * @s: string
 * @size: number of bytes
 */
void zero(char *s, int size)
{
	int i = 0;

	while (i < size)
		s[i++] = '0';
}

/**
 * add - addition
 * @n1: first number
 * @n2: second number
 *
 * Return: resulting number
 */
char *add(char *n1, char *n2)
{
	int d = 0, a, b, i, j;
	int l1 = len(n1), l2 = len(n2);
	int size = l1 > l2 ? l1 + 1 : l2 + 1;
	char *f = malloc(size + 1), *s;

	f[size] = '\0';
	zero(f, size);
	for (i = 1; i < size + 1; i++)
	{
		j = i - 1;
		a = l1 - j >= 1 ? n1[l1 - j - 1] - '0' : 0;
		b = l2 - j >= 1 ? n2[l2 - j - 1] - '0' : 0;
		f[size - i] = '0' + (a + b + d) % 10;
		d = (a + b + d) / 10;
	}
	if (*f == '0')
	{
		s = _strdup(f + 1);
		free(f);
		f = s;
	}
	return (f);
}

/**
 * _mul - multiplication of first opreand of
 * any length and second operand only one digit
 * @s: string of digits
 * @d: a digit
 *
 * Return: result of multiplication
 */

char *_mul(char *s, char d)
{
	int n = d - '0', i;
	char *r, *ss;

	r = malloc(2);
	r[0] = '0';
	r[1] = '\0';

	for (i = 0; i < n; i++)
	{
		ss = add(r, s);
		if (!ss)
			return (NULL);
		free(r);
		r = ss;
	}
	return (r);
}

/**
 * mul - multiplies numbers
 * @s1: first
 * @s2: second
 *
 * Return: s1 * s2
 */
char *mul(char *s1, char *s2)
{
	int l2 = len(s2), i;
	char *r, *a, *b, *c;

	r = malloc(2);
	r[0] = '0';
	r[1] = '\0';

	for (i = l2 - 1; i >= 0; i--)
	{
		a = _mul(s1, s2[i]);
		b = add_zeros(a, l2 - i - 1);
		c = add(r, b);
		free(b);
		free(r);
		r = c;
	}

	return (r);
}

/**
 * isonlydigits - checks if string is only digits
 * @s: string
 *
 * Return: if only digits, 1. Else, 0
 */
int isonlydigits(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (!(s[i] >= '0' && s[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - main function
 * @argc: argument count
 * @argv: argument list
 *
 * Return: if successful, 0
 * else, 98
 */
int main(int argc, char **argv)
{
	char *s, *ss;

	if (argc != 3)
	{
		print("Error\n");
		return (98);
	}
	if (!(isonlydigits(argv[1]) && isonlydigits(argv[2])))
	{
		print("Error\n");
		return (98);
	}
	s = mul(argv[1], argv[2]);
	ss = trim_zeros(s);
	print(ss);
	_putchar('\n');
	free(s);
	free(ss);
	return (0);
}
