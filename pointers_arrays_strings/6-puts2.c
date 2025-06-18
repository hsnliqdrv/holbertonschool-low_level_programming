#include "main.h"

/**
 * puts2 - print every other character of a string
 * @str: string
 */
void puts2(char *str)
{
	int i, l = 0;

	while (str[l])
		l++;

	for (i = 0; i < l; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
