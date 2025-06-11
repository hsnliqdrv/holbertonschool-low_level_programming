#include <main.h>

/**
 * _puts - the puts alternative
 * @s - the pointer to the first character of char array (string)
 *
 * Return: Number of characters printed
 */
int _puts(char* s)
{
	int l = 0;
	
	while(s[l])
	{
		_putchar(s[l]);
		l++;
	}
	_putchar('\n');
	return (l+1);
}
/**
 * main - main function
 * Return: always 0
 */
int main(void)
{
	_puts("_putchar");
	return (0);
}
