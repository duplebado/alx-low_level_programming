#include "holberton.h"

/**
 * print_diagonal - prints a diagonal line on the terminal
 *
 * @n: Integer - number of times '\' should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, white_spaces;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}


	for (i = 0; i < n; i++)
	{
		for (white_spaces = 0; white_spaces < i; white_spaces++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}
