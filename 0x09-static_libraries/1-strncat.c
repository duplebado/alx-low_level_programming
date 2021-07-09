#include "holberton.h"

/**
 * _strncat - concatenates two strings using @n bytes
 *
 * @dest: destination string; src string is appended to it
 *
 * @src: source string; gets appended to dest string
 *
 * @n: number of bytes of src that should be concatenated with dest
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && n != j)
	{
		*(dest + i) = src[j];
		j++;
		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}
