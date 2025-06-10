#include <stdio.h>

/**
 * main - the main function, prints alphabet
 * Return: always zero
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
