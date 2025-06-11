#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: a number
 *
 * Return: Last digit of n
 */
int print_last_digit(int n)
{
	int k = n % 10 > 0 ? n % 10 : -n % 10;

	_putchar(k);
	return (k);
}
