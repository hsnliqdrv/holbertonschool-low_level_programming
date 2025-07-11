#include <stdarg.h>
#include <stdio.h>
/**
 * count_formats - prints one
 * @format: string
 *
 * Return: count of format specifiers (s,f,i,c)
 */
int count_formats(const char * const format)
{
	int c = 0, i = 0;

	while (format[i])
	{
		switch (format[i])
		{
			case 's':
				c++;
				break;
			case 'f':
				c++;
				break;
			case 'i':
				c++;
				break;
			case 'c':
				c++;
				break;
		}
		i++;
	}
	return (c);
}
/**
 * print_all - prints anything
 * @format: format specifiers
 */
void print_all(const char * const format, ...)
{
	int i = 0, l, c = 0, is_null;
	char *s;
	va_list list;

	va_start(list, format);
	is_null = format == NULL;
	switch (is_null)
	{
		case 1:
			printf("\n");
			return;
	}
	l = count_formats(format);
	while (format[i])
	{
		int is_format = 0;

		switch (format[i])
		{
			case 'c':
				is_format = 1;
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				is_format = 1;
				printf("%i", va_arg(list, int));
				break;
			case 'f':
				is_format = 1;
				printf("%f", va_arg(list, double));
				break;
			case 's':
				s = va_arg(list, char *);
				is_format = 1;
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
		}
		if (c < l - 1 && is_format)
			printf(", ");
		i++;
		c += is_format;
	}
	printf("\n");
}
