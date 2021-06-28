#include "holberton.h"

/**
 * _strlen - returns string length
 * @s: string whose length is to be returned
 * Return: Integer
 */

int _strlen(char *s)
{
	int length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
