#include "lists.h"

dlistint_t *_get_dnodeint_at_index(dlistint_t *head, unsigned int index);

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
		return (NULL);

	current_node_at_the_index = _get_dnodeint_at_index(*h, idx);

	if (!current_node_at_the_index)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = current_node_at_the_index->prev;
	new_node->next = current_node_at_the_index;

	if (current_node_at_the_index->prev)
	{
		(current_node_at_the_index->prev)->next = new_node;
		current_node_at_the_index->prev = new_node;
	}

	return (new_node);
}

/**
 * _get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node to returned
 * Return: node at index @index, or
 * if the node does not exist, return NULL
 */


dlistint_t *_get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node = head;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (current_node)
	{
		if (i == index)
			return (current_node);

		current_node = current_node->next;
		i++;
	}

	return (NULL);
}
