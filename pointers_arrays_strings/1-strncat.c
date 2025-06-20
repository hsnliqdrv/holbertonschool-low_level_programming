#include "main.h"

/**
 * _strncat - concatenates n chars
 * @dest: destination
 * @src: source
 * @n: num of chars
 *
 * Return: destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int start = 0, i;

	while (dest[start])
		start++;
	for (i = 0; i < n; i++)
	{
		dest[start + i] = src[i];
		if (src[i] == '\0')
			break;
	}
	return (dest);
}
