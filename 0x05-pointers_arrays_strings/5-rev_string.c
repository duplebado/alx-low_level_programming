#include "holberton.h"

/**
 * rev_string - prints a string in reverse
 *
 * @s: String to be printed
 *
 * Return: void
 */

void rev_string(char *s)
{
	if (*s != '\0')
	{
		print_rev(++s);
		s--;
	}

	_putchar(*s);
}


