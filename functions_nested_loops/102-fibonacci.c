#include "main.h"
#include <stdio.h>

/**
 * first_digit - returns first digit of n
 * @n: a number
 *
 * Return: first digit of n
 */
int first_digit(int n)
{
	while (n >= 10)
	{
		n /= 10;
	}
	return (n);
}

/**
 * main - the main function, prints first 50 fibo starting with 1 or 2
 * Return: 0
 */
int main(void)
{
	int i = 0, k;
	long int a = 0, b = 1;

	while (i < 50)
	{
		k = first_digit(a);
		if (k == 1 || k == 2 || 1)
		{
			i++;
			if (i == 50)
				printf("%ld\n", a + b);
			else
				printf("%ld, ", a + b);
		}
		b = a + b;
		a = b - a;
	}
	return (0);
}
