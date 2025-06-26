#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplication
 * @argc: argument count
 * @argv: argument list
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int a, b;

	if (argc < 3)
		puts("Error");
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	return (0);
}
