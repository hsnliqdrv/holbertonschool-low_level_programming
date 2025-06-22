#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 */
void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = 0; j < 10; j += 2)
		{
			if (i + j >= size)
				printf("     ");
			else
				printf("%02x%02x ", b[i + j], b[i + j + 1]);
		}
		for (j = 0; j < 10; j++)
		{
			if (i + j == size)
				break;
			if (isprint(b[i + j]))
				putchar(b[i + j]);
			else
				putchar('.');
		}
		printf("\n");
	}
}
