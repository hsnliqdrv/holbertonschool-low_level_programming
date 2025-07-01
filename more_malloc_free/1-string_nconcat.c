#include <stdlib.h>

/**
 * len - counts chars of string
 * @s: string
 *
 * Return: number of chars
 */
unsigned int len(char *s)
{
	unsigned int l = 0;

	if (!s)
		return (l);
	while (s[l])
		l++;
	return (l);
}

/**
 * string_nconcat - concatenates strings
 * @s1: first string
 * @s2: second string
 * @n: first bytes of s2 to copy
 *
 * Return: if allocation fails: NULL
 * else: s1 + first n bytes of s2 as pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1 = len(s1), l2 = n < len(s2) ? n : len(s2), i;
	char *s;

	s = malloc(l1 + l2 + 1);
	if (!s)
		return (NULL);
	for (i = 0; i < l1; i++)
		s[i] = s1[i];
	for (i = 0; i < l2; i++)
		s[l1 + i] = s2[i];
	s[l1 + l2] = '\0';
	return (s);
}
