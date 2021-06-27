#include "holberton.h"

/**
 * print_square - prints a square on the terminal
 *
 * @size: Integer - length of the square to be printed
 *
 * Return: void
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');

		_putchar('\n');
	}
}
