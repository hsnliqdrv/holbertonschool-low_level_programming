#include "main.h"

/**
 * print_number - prints an int
 * @n: integer
 */
void print_number(int n)
{
	int d = 1000000000, s = 0, k;

	if (n < 0)
	{
		_putchar('-');
		d = -d;
	}
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (d != 0)
	{
		k = n / d % 10;
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
