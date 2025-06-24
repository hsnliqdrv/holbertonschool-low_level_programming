#include "main.h"
/**
 * length - length of string
 * @s: string
 *
 * Return: length
 */
int length(char *s)
{
	int l = 0;

	while (s[l])
		l++;
	return (l);
}
/**
 * equals - check if n bytes of strings equal
 * @a: first
 * @b: second
 * @n: num of bytes
 *
 * Return: 1 if equals else 0
 */
int equals(char *a, char *b, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (a[i] != b[i])
			return (0);
	}
	return (1);
}
/**
 * _strstr - search substr in str
 * @haystack: str to search in
 * @needle: str to be searched for
 *
 * Return: pointer to 1st occurence
 */
char *_strstr(char *haystack, char *needle)
{
	while (*(haystack + length(needle) - 1))
	{
		if (equals(haystack++, needle, length(needle)))
			return (haystack - 1);
	}
	return (0);
}
