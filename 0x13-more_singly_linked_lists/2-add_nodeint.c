#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list
 * @head: double pointer to head of listint_t list
 * @n: element/property n of the node to be added
 * Return: address of the new element (SUCCESS), or
 * NULL if it failed (FAILURE)
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node_ptr = malloc(sizeof(listint_t));

	if (!new_node_ptr)
		return (NULL);

	new_node_ptr->n = n;
	new_node_ptr->next = *head;
	*head = new_node_ptr;

	return (new_node_ptr);
}
