#include "main.h"
#include <stdio.h>
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
	return l;
}
/**
 * infinite_add - addition
 * @n1: first number
 * @n2: second number
 * @r: result
 * @size_r: result size
 *
 * Return: resulting number
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
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
		return 0;
	else
	{
		f = r;
		while (*f == '0' && f < r + size_r - 2)
			f++;
		return f;
	}
}
