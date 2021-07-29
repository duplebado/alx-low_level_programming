#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a singly linked list
 * @h: pointer to the head node of the singly linked list
 * Return: size_t, the number of nodes in the singly linked list
 */

size_t print_list(const list_t *h)
{
	size_t result = 0;

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		result++;
		h = h->next;
	}

	return (result);
}
