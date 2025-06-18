#include "main.h"
#include <stdio.h>
/**
 * _pow - pow alternative
 * @a: first op
 * @b: second op
 *
 * Return: integer result a**b
 */
int _pow(int a, int b)
{
	int r = 1, i;

	for (i = 0; i < b; i++)
		r *= a;
	return (r);
}
/**
 * _atoi - atoi alternative
 * @s: string containing number
 *
 * Return: converted integer
 */
int _atoi(char *s)
{
	int sign = +1, begin = -1, end = -1;
	int i, l = 0, result = 0;

	while (s[l])
		l++;
	for (i = 0; i < l; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (begin < 0)
				begin = i;
		}
		else
		{
			if (begin >= 0)
			{
				end = i;
				break;
			}
			else if (s[i] == '-')
				sign = -sign;
		}
	}
	if (begin >= 0 && end < 0)
		end = l;
	for (i = begin; i < end; i++)
	{
		result += sign * (_pow(10, (end - i - 1)) * (s[i] - '0'));
	}
	return (result);
}
