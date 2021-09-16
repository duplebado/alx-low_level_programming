#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: elemenent of the new node to be added at @idx
 * Return: the address of the new node, or NULL if it failed
 */


dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current_node_at_the_index, *new_node;

	if (!(*h))
		return (NULL)

	current_node_at_the_index = get_dnodeint_at_index(*h, idx);

	if (!current_node_at_the_index)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = current_node_at_the_index->prev;
	new_node_>next = current_node_at_the_index;
	(current_node_at_the_index->prev)->next = new_node;
	current_node_at_the_index->prev = new_node;

	return (new_node);
}
