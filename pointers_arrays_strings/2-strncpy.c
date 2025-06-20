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
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			break;
	}
	return (dest);
}
