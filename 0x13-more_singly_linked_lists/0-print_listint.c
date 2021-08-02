#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to listint_t
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes_count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes_count++;
		h = h->next;
	}

	return (nodes_count);
}
