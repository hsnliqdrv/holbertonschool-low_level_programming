#include <stdio.h>

/**
 * main - the main function, prints digits of base 10
 * Return: always zero
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
