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

	switch (format == NULL)
	{
		case 1:
			return (c);
	}
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
	int i = 0, l = count_formats(format), c = 0, is_format;
	char *s;
	va_list list;

	va_start(list, format);
	while (c < l && format[i])
	{
		is_format = 1;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%i", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				s = va_arg(list, char *);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
			default:
				is_format = 0;
		}
		if (c < l - 1 && is_format)
			printf(", ");
		i++;
		c += is_format;
	}
	printf("\n");
}
