#include "main.h"

/**
 * leet - encode into 1337
 * @s: string
 *
 * Return: new string
 */
char *leet(char *s)
{
	char leet_alp[58] = {'4', 'B', 'C', 'D', '3', 'F',
		'G', 'H', 'I', 'J', 'K', '1', 'M', 'N',
		'0', 'P', 'Q', 'R', 'S', '7', 'U', 'V',
		'W', 'X', 'Y', 'Z', '[', '\\', ']', '^',
		'_', '`', '4', 'b', 'c', 'd', '3', 'f', 'g',
		'h', 'i', 'j', 'k', '1', 'm',
		'n', '0', 'p', 'q', 'r', 's', '7', 'u',
		'v', 'w', 'x', 'y', 'z'};
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'z')
			s[i] = leet_alp[s[i] - 'A'];
		i++;
	}
	return (s);
}
