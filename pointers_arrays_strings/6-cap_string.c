#include "main.h"

/**
 * issep - checks if its a seperator
 * @c: character
 *
 * Return: 1 if sep else 0
 */
int issep(char c)
{
	char *s = " \t\n,;.!?\"(){}";
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}
/**
 * cap_string - capitalizes string
 * @s: string
 *
 * Return: new string
 */
char *cap_string(char *s)
{
	int i = 0, wassep = 1;

	while (s[i])
	{
		if ((wassep) && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] -= 32;
		wassep = issep(s[i]);
		i++;
	}
	return (s);
}
