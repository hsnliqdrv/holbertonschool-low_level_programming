#include "main.h"

/**
 * _print_rev_recursion - print stirng in reverse
 * @s: string
 */
void _print_rev_recursion(char *s)
{
	if (*(s + 1))
		_print_rev_recursion(s + 1);
	if (*s)
		_putchar(*s);
}
