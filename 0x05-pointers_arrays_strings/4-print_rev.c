#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: String to be printed
 *
 * Return: void
 */

void print_rev(char *s)
{
	if (*s != '\0')
	{
		print_rev(++s);
		s--;
	}

	_putchar(*s);
}


