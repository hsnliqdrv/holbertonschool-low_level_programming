#include "main.h"
#include <stdio.h>

/**
 * sum_of_multiples - sums multiples of 3 and 5 under 1024
 */
void sum_of_multiples(void)
{
	int i, sum = 0;

	for (i = 3; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
}
