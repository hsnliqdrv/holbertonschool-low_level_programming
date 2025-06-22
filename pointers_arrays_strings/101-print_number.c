#include "main.h"
#include <stdio.h>
/**
 * print_number - prints an int
 * @n: integer
 */
void print_number(int n)
{
	int d = 1000000000, s = 0, k, sign = 1;

	if (n < 0)
	{
		_putchar('-');
		sign = -sign;
	}
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (d != 0)
	{ 
		k = sign * (n / d % 10);
		if (k == 0)
		{
			if (s)
				_putchar('0' + k);
		}
		else
		{
			s = 1;
			_putchar('0' + k);
		}
		d /= 10;
	}
}
