#include <stdlib.h>

/**
 * malloc_checked - stores number in allocated memory using malloc
 *
 * @b: number to be stored in allocated number
 *
 * Return: pointer to the allocated memory (SUCCESS)
 * 98 if insufficient memory was available (FAILURE)
 */


void *malloc_checked(unsigned int b)
{
	unsigned int *ptr = malloc(sizeof unsigned int);

	if (ptr == NULL)
		return (98);

	ptr[i] = b;

	return (ptr);
}
