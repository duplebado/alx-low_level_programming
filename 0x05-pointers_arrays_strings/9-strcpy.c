#include "holberton.h"

/**
 * _strcpy - copy strings from source arr to destination arr
 *
 * @dest: destination array
 * @src: source array
 *
 * Return: pointer to destination array
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	while (src[i] != '\0')
	{
		*(dest + i) = src[i];
		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}
