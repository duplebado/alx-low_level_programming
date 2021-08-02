#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node of a listint_t linked list
 * @head: pointer to the head of the listint_t linked list
 * @index: index of the node to be returned
 * Return: the nth node of a listint_t linked list, or
 * if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current_node = head;

	while (current_node && (i < index))
	{
		current_node = current_node->next;
		i++;
	}

	if (i < index)
		return (NULL);

	return (current_node);
}
