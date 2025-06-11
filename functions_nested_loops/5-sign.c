#include "main.h"

/**
 * print_sign - prints the sign of n
 * @n: number to be checked
 *
 * Return: n>0: 1, n==0: 0, n<0: -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
