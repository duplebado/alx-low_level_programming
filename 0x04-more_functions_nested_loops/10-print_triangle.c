#include "holberton.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: Integer - height of triange
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (size - j <= i)
				_putchar('#');
			else
				_putchar(' ');
		}

		_putchar('\n');
	}
}
