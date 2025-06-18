#include "main.h"

/**
 * _puts - prints string
 * @str: ptr to 1st char of str
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
