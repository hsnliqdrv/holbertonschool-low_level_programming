#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: number of bytes
 *
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (!ptr)
		exit(98);
	return (ptr);
}
