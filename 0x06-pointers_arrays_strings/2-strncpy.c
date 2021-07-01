#include "holberton.h"

/**
 * _strncpy - copies a string up to @n bytes
 *
 * @dest: destination string; src string is copied to it
 *
 * @src: source string; contains content to be copied
 *
 * @n: number of bytes of src that should be copied to dest
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		*(dest + i) = src[i];
		i++;
	}
	
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
