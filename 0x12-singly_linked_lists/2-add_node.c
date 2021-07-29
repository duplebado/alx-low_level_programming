#include <stdlib.h>
#include <string.h>
#include "strlen.c"
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: douple pointer to the head of the linked list
 * @str: pointer to string to be assigned to the added node's str property
 * Return: pointer to the head of the list_t list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node_ptr
		
		
	if (!head)
		return (NULL);

	new_node_ptr = malloc(sizeof(list_t));

	if (!new_node_ptr)
		return (NULL);

	new_node_ptr->str = strdup(str);
	new_node_ptr->len = _strLen(new_node_ptr->str);
	new_node_ptr->next = *head;

	*head = new_node_ptr;

	return (*head);
}
