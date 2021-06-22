#include "holberton.h"

/**
 * print_alphabet - Prints alphabets 'a - z'
 *
 *  Return: void
 */

void print_alphabet(void)
{
	for (char c = 'a'; 'a' <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
