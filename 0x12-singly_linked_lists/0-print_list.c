#include <stdio.h>
#include "lists.h"

int _strLen(char *str);

/**
 * print_list - prints all the elements of a singly linked list
 * @h: pointer to the head node of the singly linked list
 * Return: size_t, the number of nodes in the singly linked list
 */

size_t print_list(const list_t *h)
{
	size_t result = 0;

	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", _strLen(h->str), h->str);
		else
			printf("[0] (nil)\n");

		result++;
		h = h->next;
	}

	return (result);
}

/**
 * _strLen - gets the length of a string
 * @str: pointer to a string
 * Return: int, number of characters in @str
 */
int _strLen(char *str)
{
	int i = 0;

	while (str[i])
		i++;

	return (i);
}
