#include "main.h"

/**
 * _memcpy - copies n bytes
 * @dest: destination
 * @src: source
 * @n: number of bytes
 *
 * Return: pointer to memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
