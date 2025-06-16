#include "main.h"

/**
 * _isupper - check if letter is uppercase
 * @c: character as an integer
 *
 * Return: 1 if c is uppercase else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 97)
		return (1);
	else
		return (0);
}
