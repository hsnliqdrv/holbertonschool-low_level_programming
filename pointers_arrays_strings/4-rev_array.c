#include "main.h"

/**
 * reverse_array - reverses array of integers
 * @a: array
 * @n: length
 */
void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < n / 2; i++)
	{
		t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}
}
