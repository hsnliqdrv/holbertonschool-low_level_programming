#include "main.h"

/**
 * swap_int - swaps values pointed by given pointers
 * @a: ptr to first value
 * @b: ptr to second value
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

