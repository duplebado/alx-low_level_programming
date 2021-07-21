#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: an array of parameters (values) to be passed to @action
 * @size: size/length of @array
 * @action: pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
