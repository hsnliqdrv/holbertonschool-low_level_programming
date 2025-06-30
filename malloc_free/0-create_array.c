#include <stdlib.h>

/**
 * create_array - create array of chars
 * @size: number of chars
 * @c: char to fill array
 *
 * Return: NULL if size is 0 or allocat
 * ion failed else pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(size);
	if (!ptr)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
