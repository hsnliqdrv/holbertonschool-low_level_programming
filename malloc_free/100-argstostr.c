#include <stdlib.h>
#include <stdio.h>
/**
 * len - length of string
 * @s: string
 *
 * Return: length
 */
int len(char *s)
{
	int l = 0;

	if (!s)
		return (0);
	while (s[l])
		l++;
	return (l);
}
/**
 * argstostr - concat string arguments
 * @ac: argument count
 * @av: argument list
 *
 * Return: if successful, concatenated string
 * if ac = 0 or av = NULL, NULL
 * if malloc fails, NULL
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int l = 0;
	int i, a = 0, j;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		l += len(av[i]);
	}
	s = malloc(l + ac + 1);
	if (!s)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < len(av[i]); j++)
		{
			s[a + j] = av[i][j];
		}
		s[a + j] = '\n';
		a += j + 1;
	}
	s[l + ac] = '\0';
	return (s);
}
