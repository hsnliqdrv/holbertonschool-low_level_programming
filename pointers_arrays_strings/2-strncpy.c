#include "main.h"

/**
 * _strncpy - copy n characters
 * @dest: destination
 * @src: source
 * @n: num of chars
 *
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, r = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = r ? '\0' : src[i];
		if (src[i] == '\0')
			r = 1;
	}
	return (dest);
}
