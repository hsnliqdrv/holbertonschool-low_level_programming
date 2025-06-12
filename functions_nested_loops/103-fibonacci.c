#include "main.h"
#include <stdio.h>

/**
 * main - the main function, prints first 50 fibo starting with 1 or 2
 * Return: 0
 */
int main(void)
{
	long int a = 0, b = 1;
	long int s = 0;

	while (a < 4000000)
	{
		if (a % 2 == 0)
		{
			s += a;
		}
		b = a + b;
		a = b - a;
	}
	printf("%ld\n", s);
	return (0);
}
