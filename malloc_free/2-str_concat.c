#include <stdlib.h>

/**
 * len - length of string
 * @s: string
 *
 * Return: length
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
 * str_concat - concatenate strings
 * @s1: first string
 * @s2: second string
 *
 * Return: if successful, concatenated string
 * if failed, NULL
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int l1 = len(s1), l2 = len(s2), i;
	char *s = malloc(l1 + l2 + 1);

	if (!s)
		return (NULL);
	for (i = 0; i < l1; i++)
		s[i] = s1[i];
	for (i = 0; i < l2; i++)
		s[l1 + i] = s2[i];
	s[l1 + l2] = '\0';
	return (s);
}
