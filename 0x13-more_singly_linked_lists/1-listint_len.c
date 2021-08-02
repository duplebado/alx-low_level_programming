#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - gets number of elements in a linked listint_t list.
 * @h: pointer to listint_t
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes_count = 0;

	while (h)
	{
		nodes_count++;
		h = h->next;
	}

	return (nodes_count);
}
