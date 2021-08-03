#include <stdlib.h>
#include "lists.h"

void free_listint(listint_t *head);

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: double pointer to the head of the listint_t list
 */

void free_listint2(listint_t **head)
{
	if (!head)
		return;

	free_listint(*head)
	*head = NULL;
}

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head of the listint_t list
 */

void free_listint(listint_t *head)
{
	if (!head)
		return;

	if (head->next)
	{
		free_listint(head->next);
	}

	free(head);
}

