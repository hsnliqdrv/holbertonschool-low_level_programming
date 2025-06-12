#include "main.h"

/**
 * print_times_table - prints table 9x
 * @n: number
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i < n + 1; i++)
	{
		k = 0;
		for (j = 0; j < n + 1; j++)
		{
			if (k >= 10)
				_putchar('0' + k / 10);
			else if (j != 0)
				_putchar(' ');
			_putchar('0' + k % 10);
			if (j == n)
				_putchar('\n');
			else
			{
				_putchar(',');
				_putchar(' ');
			}
			k += i;
		}
	}
}
