#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: a number
 *
 * Return: Last digit of n
 */
int print_last_digit(int n)
{
	int k = n % 10;

	k = k > 0 ? k : -k;
	_putchar('0' + k);
	return (k);
}
