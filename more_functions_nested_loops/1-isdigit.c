#include "main.h"

/**
 * _isdigit - checks if character is a digit
 * @c: character as an integer
 *
 * Return: 1 if is a digit else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
