#include "main.h"

/**
 * _strspn - counts bytes in initial segment
 * @s: string
 * @accept: bytes
 *
 * Return: number of inital seg bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0, j;
	int b;

	while (s[n])
	{
		b = 0;
		j = 0;
		while (accept[j])
		{
			if (accept[j] == s[n])
			{
				b = 1;
				break;
			}
			j++;
		}
		if (b == 0)
			return (n);
		n++;
	}
	return (n);
}
