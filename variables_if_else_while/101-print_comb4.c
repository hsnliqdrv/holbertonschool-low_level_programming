#include <stdio.h>

/**
 * main - the main function, prints all different combinations of two digits
 * Return: always zero
 */
int main(void)
{
	int ch, ch2, ch3. ch4;

	for (ch = '0'; ch <= '9'; ch++)
	{
		for (ch2 = '0'; ch2 <= '9'; ch2++)
		{
			for (ch3 = '0'; ch3 <= '9'; ch3++)
			{
				for (ch4 = '0'; ch4 <= '9'; ch4++)
				{
					if (!(ch == ch3 && ch2 == ch4))
					{
						putchar(ch);
						putchar(ch2);
						if (ch + ch2 + ch3 + ch4 == 3*'9'+'8')
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
		}
	}
	return (0);
}
