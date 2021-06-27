#include "holberton.h"

/**
 * print_more_numbers - prints 0 - 9 except 2 and 4
 *
 * Return: void
 */

void print_more_numbers(void)
{
        char num;

        for (num = '0'; num <= '9'; num++)
	{
		if (num != '2' || num != '4')
			_putchar(num);
	}

        _putchar('\n');
}

