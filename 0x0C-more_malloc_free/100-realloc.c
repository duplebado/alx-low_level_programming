#include "holberton.h"

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: is a pointer to the memory previously allocated with a call to malloc
 * @old_size: is the size, in bytes, of the allocated space fot ptr
 * @new_size: is the new size, in bytes of the new memory block
 *
 * Return: new pointer or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	char *cp_ptr, *copy;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
	{
		ptr = malloc(new_size);
		if (!ptr)
			return (NULL);
		return (ptr);
	}
	cp_ptr = ptr;
	new_ptr = malloc(new_size * sizeof(*cp_ptr));
	if (!new_ptr)
	{
		free(ptr);
		return (NULL);
	}
	copy = new_ptr;
	for (i = 0; i < new_size && i < old_size; i++)
		copy[i] = *cp_ptr++;

	free(ptr);
	return (new_ptr);
}
