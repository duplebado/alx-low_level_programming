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
	int i = 0;
	
	while (s[i])
		i++;

	while (i--)
		_putchar(s[i]);

	_putchar('\n');
}


