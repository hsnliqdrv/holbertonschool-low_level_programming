#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * is_digits - check if string consists of digits only
 * @s: string
 *
 * Return: 1 if only digits else 0
 */
int is_digits(char *s)
{
	while (*s)
	{
		if (!((*s <= '9' && *s >= '0') || *s == '-'))
			return (0);
		s++;
	}
	return (1);
}
/**
 * minimum_cents - min number of cents for change
 * @m: amount of money in cents
 * @cents: available cents in descending order
 * @n: number of available cents
 *
 * Example:
 * int cents[] = {3, 2, 1};
 * minimum_cents(10, cents, 3) // returns 4
 * Return: minimum number of cents to change for m
 */
int minimum_cents(int m, int *cents, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (cents[i] <= m)
			return (1 + minimum_cents(m - cents[i], cents, n));
	}
	return (0);
}

/**
 * main - main function
 * @argc: arg count
 * @argv: arg list
 *
 * Return: 0 if success, 1 if error
 */
int main(int argc, char **argv)
{
	int m, n = 5;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc - 1 != 1)
	{
		puts("Error");
		return (1);
	}
	if (!is_digits(argv[1]))
	{
		puts("Error");
		return (1);
	}
	m = atoi(argv[1]);
	printf("%d\n", minimum_cents(m, cents, n));
	return (0);
}
