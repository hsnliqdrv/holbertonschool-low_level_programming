#include <stdio.h>

/**
 * main - the main function, prints alphabet
 * Return: always zero
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
