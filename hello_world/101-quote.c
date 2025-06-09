#include <unistd.h>
#include <stdio.h>
/**
 * main - The main function, print to standard error
 * Return: 0 if successful, anything else means error
 */
int main(void)
{
	const char *str =
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int l = 0;

	while (str[l])
	{
		l++;
	}
	write(2, str, l);
	return (1);
}
