#include "main.h"

/**
 * string_toupper - lower to upper
 * @s: string
 *
 * Return: new string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= ('a' - 'A');
		i++;
	}
	return (s);
}
