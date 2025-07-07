#include <stdlib.h>
/**
 * int_index - searches index
 * @array: array
 * @size: size of array
 * @cmp: compare function
 *
 * Return: index of first occurence
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
