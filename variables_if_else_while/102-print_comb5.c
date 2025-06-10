#include <stdio.h>

/**
 * main - the main function, prints all different combinations of two digits
 * Return: always zero
 */
int main(void)
{
	int a, b;

	for (a = 0; a <= 99; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			putchar(48 + (a / 10));
			putchar(48 + (a % 10));
			putchar(' ');
			putchar(48 + (b / 10));
			putchar(48 + (b % 10));
			if (a == 98 && b == 99)
				putchar('\n');
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
