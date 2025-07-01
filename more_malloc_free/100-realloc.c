#include <stdlib.h>

/**
 * _realloc - realloc alternative
 * @ptr: pointer to previously allocated mem
 * @old_size: size of memory allocated previously
 * @new_size: new size of memory block at ptr
 *
 * Return: if new_size == 0, NULL
 * else pointer to new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int copy, i;
	char *new;

	if (!ptr)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	copy = new_size < old_size ? new_size : old_size;
	new = malloc(new_size);
	if (!new)
		return (NULL);
	for (i = 0; i < copy; i++)
		new[i] = ((char *) ptr)[i];
	free(ptr);
	return ((void *) new);
}
