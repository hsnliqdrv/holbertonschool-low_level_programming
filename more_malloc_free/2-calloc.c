#include <stdlib.h>

/**
 * _calloc - calloc alternative
 * @nmemb: number of elements of the array
 * @size: size of eahc element in bytes
 *
 * Return: if nmemb or size = 0, NULL
 * if malloc fails, NULL
 * else, pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb * size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;
	return ((void *) ptr);
}
