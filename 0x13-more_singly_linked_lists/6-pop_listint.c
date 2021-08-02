#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - eletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: double pointer to the head of the listint_t list
 * Return: the head node’s data (n) or
 * 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *node_to_pop;
	int n;

	if (!(*head))
		return (0);

	node_to_pop = *head;

	if (node_to_pop->next)
		*head = node_to_pop->next;

	n = node_to_pop->n;

	free(node_to_pop);

	return (n);
}
