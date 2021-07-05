#include "holberton.h"

/**
 * _memcpy - copies n bytes from memory area @src to
 * memory area @ dest
 *
 * @dest: destination memory area
 *
 * @src: source memory area
 *
 * @n: number of bytes
 *
 * Return: pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
