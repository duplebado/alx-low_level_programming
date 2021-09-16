#include "lists.h"
#include "2-add_dnodeint.c"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: double pointer to head of the list
 * @n: value n of the new node to be added to the list
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current_node;

	if (!(*head))
		return (add_dnodeint(head, n));

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	current_node = *head;

	while (current_node->next)
		current_node = current_node->next;

	current_node->next = new_node;
	new_node->prev = current_node;

	return (new_node);
}
