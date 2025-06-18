#include "main.h"

/**
 * puts_half - print half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int i, l = 0;

	while (str[l])
		l++;
	for (i = l / 2 + l % 2; i < l; i++)
		_putchar(str[i]);
	_putchar('\n');
}
