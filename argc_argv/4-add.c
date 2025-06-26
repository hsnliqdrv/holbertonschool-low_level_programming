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
		if (!(*s <= '9' && *s >= '0'))
			return (0);
		s++;
	}
	return (1);
}
/**
 * main - the main func
 * @argc: arg count
 * @argv: arg list
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int s = 0, i;

	for (i = 1; i < argc; i++)
	{
		if (!is_digits(argv[i]))
		{
			puts("Error");
			return (0);
		}
		s += atoi(argv[i]);
	}
	printf("%d\n", s);
	return (0);
}
