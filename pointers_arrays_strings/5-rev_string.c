#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string
 */
void rev_string(char *s)
{
	int i, l = 0;
	char t;

	while (s[l])
		l++;
	for (i = 0; i < l / 2; i++)
	{
		t = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = t;
	}
}
