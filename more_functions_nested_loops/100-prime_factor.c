#include "main.h"
#include <math.h>
#include <stdio.h>

/**
 * isprime - checks primeness
 * @n: number
 *
 * Return: 1 if n is prime else 0
 */
int isprime(long int n)
{
	double d;
	int i;

	d = sqrt(n);
	for (i = 2; i < d; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
/**
 * main - main function
 * Return: 0
 */
int main(void)
{
	long int n = 612852475143;
	long int i;
	int a, b;

	for (i = 2; i <= n / 2; i++)
	{
		a = n % i == 0;
		b = isprime(n / i);

		if (a && b)
		{
			printf("%ld\n", n / i);
			break;
		}
	}
	return (0);
}
