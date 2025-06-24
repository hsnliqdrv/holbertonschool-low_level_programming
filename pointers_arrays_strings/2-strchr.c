#include "main.h"

/**
 * _strchr - return ptr to first occurence
 * @s: string
 * @c: char
 *
 * Return: pointer to first occurence
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s++ == c)
			return (s - 1);
	}
	if (c == '\0')
		return (s);
	return (0);
}
