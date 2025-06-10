#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the main function, prints the last digit of n
 * Return: always zero
 */
int main(void)
{
	int n;
	int k;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	k = n % 10;
	printf("Last digit of %d is %d ", n, k);
	if (k > 5)
		printf("and is greater than 5");
	else if (k == 0)
		printf("and is 0");
	else
		printf("and is less than 6 and not 0");
	printf("\n");
	return (0);
}
