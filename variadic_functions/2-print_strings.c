#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: separates strings
 * @n: number of parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s;
	va_list list;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(list, char *);
		if (!s)
			printf("(nil)");
		else
			printf("%s", s);
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
}
