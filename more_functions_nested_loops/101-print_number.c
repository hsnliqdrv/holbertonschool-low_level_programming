#include "main.h"

/**
 * print_number - print numbers
 * @n: number
 */
void print_number(int n)
{
	int i, j = 0, k;

	if (n < 0)
	{
		_putchar('-');
	}
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 1000000000; i > 0; i /= 10)
	{
		k = n / i % 10;
		if (k < 0)
			k = -k;
		if (k || j)
		{
			_putchar('0' + k);
			j++;
		}
	}
}
