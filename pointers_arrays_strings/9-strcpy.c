#include "main.h"

/**
 * _strcpy - copy string
 * @dest: destination
 * @src: source
 *
 * Return: destination pointer
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0, i;

	while (src[l])
		l++;
	for (i = 0; i < l; i++)
		dest[i] = src[i];
	dest[l] = '\0';
	return (dest);
}
