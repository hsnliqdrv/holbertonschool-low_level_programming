#include <stdlib.h>

/**
 * array_range - creates array of integers
 * @min: minimum of array
 * @max: maxiumum of array
 *
 * Return: min > max, NULL
 * malloc fails, NULL
 * else, pointer
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min + 1));
	if (!array)
		return (NULL);
	for (i = min; i <= max; i++)
		array[i - min] = i;
	return (array);
}
