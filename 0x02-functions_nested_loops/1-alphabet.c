#include "holberton.h"

/**
 * print_alphabet - Prints alphabets 'a - z'
 *
 *  Return: void
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; 'a' <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
