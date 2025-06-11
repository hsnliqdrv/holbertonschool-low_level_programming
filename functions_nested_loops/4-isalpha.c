#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: a character to be checked
 *
 * Return: 1 if c is a letter
 * 0 otherwise
 */
int _isalpha(int c)
{
	int lower = (c >= 'a' && c <= 'z');
	int upper = (c >= 'A' && c <= 'Z');

	return (lower || upper);
}
