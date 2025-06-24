#include "main.h"

/**
 * contains - if string cont a char
 * @s: string
 * @c: char
 *
 * Return: 1 if contains else 0
 */
int contains(char *s, char c)
{
	while (*s)
	{
		if (*s++ == c)
			return (1);
	}
	return (0);
}

/**
 * _strpbrk - find first occurence of any character
 * specified in second string in first string
 * @s: first string
 * @accept: second string
 *
 * Return: pointer to first occurence
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (contains(accept, *s++))
			return (s - 1);
	}
	return (0);
}
