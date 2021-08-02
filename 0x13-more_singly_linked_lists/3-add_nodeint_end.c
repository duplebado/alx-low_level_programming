#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: double pointer to the head of listint_t list
 * @n:element/property n of the node to be added
 * Return: address of the new element (SUCCESS), or
 * NULL if it failed (FAILURE)
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node_ptr = malloc(sizeof(listint_t)), *current_node;

	if (!new_node_ptr)
		return (NULL);

	new_node_ptr->n = n;
	new_node_ptr->next = NULL;

	if (!(*head))
	{
		*head = new_node_ptr;
		return (new_node_ptr);
	}

	current_node = *head;

	while (current_node->next)
	{
		current_node = current_node->next;
	}

	current_node->next = new_node_ptr;

	return (new_node_ptr);
}
