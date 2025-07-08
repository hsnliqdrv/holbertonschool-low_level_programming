#include <stdarg.h>

/**
 * sum_them_all - sums its parameters
 * @n: number of parameters
 *
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int s = 0;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		s += va_arg(list, int);
	}
	return (s);
}
