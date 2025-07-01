#include <stdio.h>
#include <stdlib.h>
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
 * add_zeros - addes zeros to end of string
 * @s: string
 * @z: number of zeros
 */
void add_zeros(char *s, int z)
{
	int ls = len(s);
	int l = ls + z, i;

	s = realloc(s, l + 1);
	for (i = ls; i < l; i++)
		s[i] = '0';
	s[l] = '\0';
}
/**
 * add - addition
 * @n1: first number
 * @n2: second number
 * @r: result
 * @size_r: result size
 *
 * Return: resulting number
 */
char *add(char *n1, char *n2, char *r, int size_r)
{
	int d = 0, a, b, i, j;
	int l1 = len(n1), l2 = len(n2);
	char *f;

	r[size_r - 1] = '\0';
	for (i = 1; i < size_r; i++)
	{
		j = i - 1;
		a = l1 - j >= 1 ? n1[l1 - j - 1] - '0' : 0;
		b = l2 - j >= 1 ? n2[l2 - j - 1] - '0' : 0;
		r[size_r - i - 1] = '0' + (a + b + d) % 10;
		d = (a + b + d) / 10;
	}
	j = i - 1;
	a = l1 - j >= 1 ? n1[l1 - j - 1] - '0' : 0;
	b = l2 - j >= 1 ? n2[l2 - j - 1] - '0' : 0;
	if (a + b + d > 0)
		return (0);
	f = r;
	while (*f == '0' && f < r + size_r - 2)
		f++;
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
	int n = d - '0', i, ls = len(s);
	char *r = malloc(ls + 2);
	for (i = 0; i < ls + 1; i++)
		r[i] = '0';
	r[ls + 1] = '\0';
	for (i = 0; i < d; i++)
	{
		r = add(r, s, r, ls + 2);
		if (!r)
			return (NULL);
	}
	return r;
}
