#include "main.h"

/**
 * _memset - fill memory with a byte
 * @s: pointer to memory
 * @b: byte
 * @n: number of bytes
 *
 * Return: output pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
