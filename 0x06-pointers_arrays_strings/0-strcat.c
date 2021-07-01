#include "holberton.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: destination string; src string is appended to it
 *
 * @src: source string; gets appended to dest string
 * 
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0; j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		*(dest + i) = src[j];
		j++;
		i++;
	}

	*(dest + i) = '\0';

	return (dest); 
}
