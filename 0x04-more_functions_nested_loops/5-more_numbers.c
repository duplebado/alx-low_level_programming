#include "holberton.h"

/**
 * more_numbers - prints 0 - 14 ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int times;
	int num;

	for (times = 1; times <= 10; times++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar('1');

			_putchar((num % 10) + '0');
		}

		_putchar('\n');
	}
}
