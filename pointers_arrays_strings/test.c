#include <stdio.h>

int main(int argc, char *argv[])
{
	unsigned sum = 0;
	char *s = argv[1];
	while (*s)
	{
		sum += *s++;
	}
	printf("%u\n", sum);
	return 0;
}
