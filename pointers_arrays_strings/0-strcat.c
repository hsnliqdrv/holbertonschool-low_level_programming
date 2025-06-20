#include "main.h"

/**
 * _strcat - strcat alternative
 * @dest: destination pointer
 * @src: source pointer
 *
 * Return: destination
 */
char *_strcat(char *dest, char *src)
{
	int start = 0, i = 0;

	while (dest[start])
		start++;
	while (src[i])
	{
		dest[start + i] = src[i];
		i++;
	}
	dest[start + i] = '\0';
	return (dest);
}
