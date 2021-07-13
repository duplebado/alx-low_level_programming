#include <stdlib.h>

/**
 * alloc_grid - creates a 2 dimensional array of integers
 *
 * @width: width/rows of the 2D array
 *
 * @height: height/columns of the 2D array
 *
 * Return:  pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int i, j, *alloc_mem;

	if (width <= 0 || height <= 0)
		return ('\0');

	alloc_mem = malloc(sizeof(int *) * height);

	if (alloc_mem == NULL)
		return ('\0');

	for (i = 0; i < height; i++)
	{
		alloc_mem[i] = malloc(sizeof(int) * width);

		if (alloc_mem[i] == NULL)
			return ('\0');

		for (j = 0; j < width; j++)
			*(*(alloc_mem + i) + j) = 0;
	}

	return (alloc_mem);
}
