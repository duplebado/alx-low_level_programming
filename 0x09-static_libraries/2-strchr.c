#include "holberton.h"

/**
 * _strchr - locates a char @c in string @s
 *
 * @s: a string
 *
 * @c: a character
 *
 * Return: pointer to the first occurrence of @c in @s OR NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) >= '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}

	return ('\0');
}
