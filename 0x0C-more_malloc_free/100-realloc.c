#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free functions
 *
 * @ptr: pointer to the memory previously allocated with a call to malloc
 *
 * @old_size: size, in bytes, of the allocated space for @ptr
 *
 * @new_size: new size, in bytes of the new memory block
 *
 * Return: pointer to new allocated memory
 * NULL, if @ptr is NULL (FAILURE) or
 * NULL, if @new_size == 0 && @ptr != NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int i;
	void *new_ptr;

	if (new_size == old_size)
		return ('\0');

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);

		if (new_ptr == NULL)
			return ('\0');

		return (new_ptr);
	}

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return ('\0');
	}

	new_ptr = malloc(sizeof(*ptr) * new_size);

	if (!new_ptr)
		return ('\0');

	for (i = 0; i < old_size; i++)
		new_ptr[i] = ptr[i];

	free(ptr);
	return (new_ptr);
}
