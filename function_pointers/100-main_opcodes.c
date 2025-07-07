#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0 if successful, anything else if error
 */
int main(int argc, char **argv)
{
	unsigned char *opcodes = (unsigned char *)main;
	int c, i;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	c = atoi(argv[1]);
	if (c < 0)
	{
		puts("Error");
		return (2);
	}
	for (i = 0; i < c; i++)
	{
		printf("%02x", opcodes[i]);
		if (i == c - 1)
			putchar('\n');
		else
			putchar(' ');
	}
	return (0);
}
