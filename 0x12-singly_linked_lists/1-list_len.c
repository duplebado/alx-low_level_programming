#include <stdlib.h>
#include "lists.h"

/**
 * list_len - calculates the number of elements in a singly linked list
 * @h: pointer to the head node of the singly linked list
 * Return: size_t, the number of nodes in the singly linked list
 */

size_t list_len(const list_t *h)
{
	size_t result = 0;

	while (h)
	{
		result++;
		h = h->next;
	}

	return (result);
}
