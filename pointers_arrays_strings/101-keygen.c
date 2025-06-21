#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - the main func
 * Return: 0
 */

int main(void)
{
	unsigned char i;
	unsigned len = 0;
	char password[2772 + 1];
	unsigned n = 2772;
	srand(time(NULL));
	
	while (n > 0)
	{
		i = rand() % 128;
		if (i == 0)
			i++;
		if (i >= n)
			i = n;
		password[len] = i;
		n -= i;
		len++;
	}
	password[len] = '\0';
	printf("%s", password);
	return 0;
}
