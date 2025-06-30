#include <stdlib.h>

/**
 * alloc_grid - allocates a 2d array
 * @width: width of grid
 * @height: height of grid
 *
 * Return: if successful, the grid (int**)
 * if width or height <= 0, NULL
 * if allocation fails, NULL
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(sizeof(int *) * height);
	if (!ptr)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (!(ptr[i]))
			return (NULL);
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
