#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of diagonals
 * @a: array
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int i;
	int s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += a[i * size + i];
		s2 += a[i * size + size - i - 1];
	}
	printf("%d, %d\n", s1, s2);
}
