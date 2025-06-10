#include <stdio.h>

/**
 * main - the main function, prints all different combinations of two digits
 * Return: always zero
 */
int main(void)
{
	int ch, ch2;

	for (ch = '0'; ch <= '9'; ch++)
	{
		for (ch2 = ch + 1; ch2 <= '9'; ch2++)
		{
			if (ch != ch2)
			{
				putchar(ch);
				putchar(ch2);
				if (ch == '8' && ch2 == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
