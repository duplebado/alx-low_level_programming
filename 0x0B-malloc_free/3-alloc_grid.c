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
	int i, int j;
	int *alloc_mem;

	if (width <= 0 || height <= 0)
		return ('\0');

	alloc_mem = malloc(sizeof(int[width][height]);

	if alloc_mem == NULL)
		return ('\0');

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			alloc_mem[i][j] = 0;
	}

	return (alloc_mem);
}
