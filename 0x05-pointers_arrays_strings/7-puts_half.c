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
	int n, j;

	while (*str != '\0')
	{
		i++;
		str++;
	}

	if (i % 2 != 0)
		n = (i - 1) / 2;
	else
		n = i / 2;

	for (j = 0; j <= n; j++)
		_putchar(str[n - j]);

	_putchar('\n');
}	

