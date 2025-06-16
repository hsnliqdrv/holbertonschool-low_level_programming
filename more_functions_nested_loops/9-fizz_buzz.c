#include "main.h"
#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */
int main(void)
{
	int i, none;

	for (i = 1; i <= 100; i++)
	{
		none = 1;
		if (i % 3 == 0)
		{
			printf("Fizz");
			none = 0;
		}
		if (i % 5 == 0)
		{
			printf("Buzz");
			none = 0;
		}
		if (none)
			printf("%d", i);
		if (i == 100)
			putchar('\n');
		else
			putchar(' ');
	}
	return (0);
}
