#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head of the listint_t list
 */

void free_listint(listint_t *head)
{
	if (head->next)
	{
		free_listint(head->next);
	}

	free(head);
}
