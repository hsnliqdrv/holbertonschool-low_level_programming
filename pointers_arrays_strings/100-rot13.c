#include "main.h"

/**
 * rot13 - encodes string in rot13
 * @s: string
 *
 * Return: encoded string
 */
char *rot13(char *s)
{
	char *i = s;
	char rot13[] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T',
		'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'B',
		'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
		'K', 'L', 'M', '[', '\\', ']', '^', '_',
		'`', 'n', 'o', 'p', 'q', 'r', 's', 't',
		'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b',
		'c', 'd', 'e', 'f', 'g', 'h', 'i',
		'j', 'k', 'l', 'm'};
	while (*i)
	{
		if (*i >= 'A' && *i <= 'z')
			*i = rot13[*i - 'A'];
		i++;
	}
	return (s);
}
