#include "main.h"

/**
 * _strlen - return length of a string
 * @s: ptr to string
 *
 * Return: Length of string
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s++)
		l++;
	return (l);
}
