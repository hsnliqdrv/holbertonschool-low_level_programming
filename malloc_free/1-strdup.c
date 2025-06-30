#include <stdlib.h>

/**
 * _strdup - duplicate given string
 * @str: string
 *
 * Return: if str = null, null
 * if insufficient memory, null
 * if successful, pointer to duplicate
 */
char *_strdup(char *str)
{
	unsigned int l = 0, i;
	char *ptr;

	if (!str)
		return (NULL);
	while (str[l])
		l++;
	ptr = malloc(l + 1);
	if (!ptr)
		return (NULL);
	for (i = 0; i < l; i++)
		ptr[i] = str[i];
	ptr[l] = '\0';
	return (ptr);
}
