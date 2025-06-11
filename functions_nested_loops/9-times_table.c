#include "main.h"

/**
 * times_table - prints table 9x
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		k = 0;
		for (j = 0; j < 10; j++)
		{
			if (k >= 10)
				_putchar('0' + k / 10);
			else if (j != 0)
				_putchar(' ');
			_putchar('0' + k % 10);
			if (j == 9)
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
