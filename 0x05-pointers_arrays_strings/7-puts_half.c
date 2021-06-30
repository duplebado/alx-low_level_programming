#include "holberton.h"

/**
 * puts_half - print half of a string
 *
 * @str: input string
 *
 * Result: void
 */

void puts_half(char *str)
{
	int i = 0;
	int n;

	while (str[i] != '\0')
		i++;

	for (n = i / 2; str[n] != '\0' && n < i; n++)
		_putchar(str[n]);

	_putchar('\n');
}	

