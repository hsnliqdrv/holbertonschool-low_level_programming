#include "main.h"
#include <stdio.h>

/**
 * main - the main function
 * @argc: argument count
 * @argv: argument list
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
