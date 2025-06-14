#include "main.h"
#include <stdio.h>

/**
 * pow_of_ten - power of 10
 * @b: second op
 *
 * Return: 10^b
 */
int pow_of_ten(int b)
{
	int i;
	int a = 1;

	for (i = 0; i < b; i++)
	{
		a *= 10;
	}

	return (a);
}

/**
 * main - the main function, prints first 98 fibo starting with 1 or 2
 * Return: 0
 */
int main(void)
{
	unsigned long a = 0, b = 1, t;
	int n = 5, i = 0, j, z, g;
	int c = a % pow_of_ten(n), d = b % pow_of_ten(n);

	a /= pow_of_ten(n);
	b /= pow_of_ten(n);
	while (i < 98)
	{
		g = 0;
		i++;
		t = a + b + (c + d) / pow_of_ten(n);
		if (t > 0)
		{
			g++;
			printf("%lu", t);
		}
		for (j = n - 1; j >= 0; j--)
		{
			z = ((c + d) / pow_of_ten(j)) % 10;
			if (g || z)
			{
				g++;
				printf("%d", z);
			}
		}
		if (i == 98)
			printf("\n");
		else
			printf(", ");
		b = a + b + (c + d) / pow_of_ten(n);
		d = (c + d) % pow_of_ten(n);
		a = b - a;
		c = d - c;
		if (c < 0)
		{
			c += pow_of_ten(n);
			a -= 1;
		}
	}
	return (0);
}
