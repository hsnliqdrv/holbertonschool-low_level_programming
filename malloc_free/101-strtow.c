#include <stdlib.h>

/**
 * _strndup - duplicate given string
 * @str: string
 * @l: num of chars
 *
 * Return: if str = null, null
 * if insufficient memory, null
 * if successful, pointer to duplicate
 */
char *_strndup(char *str, unsigned int l)
{
	unsigned int i;
	char *ptr;

	if (!str)
		return (NULL);
	ptr = malloc(l + 1);
	if (!ptr)
		return (NULL);
	for (i = 0; i < l; i++)
		ptr[i] = str[i];
	ptr[l] = '\0';
	return (ptr);
}

/**
 * count - counts words
 * @s: string
 *
 * Return: number of strings
 */
int count(char *s)
{
	int i = 0, l = 0, n = 1;

	while (s[i])
	{
		if (s[i] != ' ')
		{
			if (n)
			{
				l++;
				n = 0;
			}
		}
		else
		{
			n = 1;
		}
		i++;
	}
	return (l);
}

/**
 * strtow - splits stirng to words
 * @str: string
 *
 * Return: array of words
 */
char **strtow(char *str)
{
	int l = -1, i = 0, d, m = 0;
	char **words;
	char *ss = NULL;

	if (!str)
		return (NULL);
	words = malloc(sizeof(char *) * count(str) + 1);
	if (!words)
		return (NULL);
	while (str[i])
	{
		if (str[i] != ' ')
		{
			if (l == -1)
				l = i;
		}
		else
		{
			if (l >= 0)
			{
				ss = _strndup(str + l, i - l);
				if (!ss)
				{
					for (d = 0; d < m; d++)
						free(words[d]);
					free(words);
					return (NULL);
				}
				words[m] = ss;
				m++;
				l = -1;
			}
		}
		i++;
	}
	words[m] = NULL;
	return (words);
}
