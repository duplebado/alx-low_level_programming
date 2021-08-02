#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: double pointer to the head of the listint_t list
 */

void free_listint2(listint_t **head)
{
	free_listint(*head);
	*head = NULL;
}
