#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
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
	unsigned char *opcodes = (unsigned char *)main;
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
