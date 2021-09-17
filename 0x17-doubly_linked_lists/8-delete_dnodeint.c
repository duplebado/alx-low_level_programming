#include "lists.h"

int delete_first_node(dlistint_t *head);
int delete_in_btw_nodes(dlistint_t *node);

/**
 * delete_dnodeint_at_index - deletes the node at index index of a
 * dlistint_t linked list
 * @head: double pointer to the head of the list
 * @index: index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node;
	int i = 0;

	if (!(*h))
		return (-1);

	if (index == i)
		return (delete_first_node(*head));

	current_node = *head;

	while (current_node)
	{
		if (index == i)
			return (delete_in_btw_nodes(current_node));

		current_node = current_node->next;
		i++;
	}

	return (-1);
}

/**
 * delete_first_node - deletes the first/head node of dlistint_t list
 * @head: pointer to the head of the list to be deleted
 * Return: 1
 */

int delete_first_node(dlistint_t *head)
{
	if (head->next)
		(head->next)->prev = NULL;
	head = head->next;
	free(head);

	return (1);
}

/**
 * delete_in_btw_nodes - deletes a node in between two nodes of dlistint_t list
 * @node: pointer to the node to be deleted
 * Return: 1
 */

int delete_in_btw_nodes(dlistint_t *node)
{
	(node->next)->prev = node->prev;
	(node->prev)->next = node->next;

	free(node);

	return (1);
}
