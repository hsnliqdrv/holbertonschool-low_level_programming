#include <stdio.h>

/**
 * main - the main function, print digits without a char variable
 * Return: always zero
 */
int main(void)
{
	int i = 0;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
