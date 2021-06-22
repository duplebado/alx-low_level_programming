#include "holberton.h"

/**
 * print_sign - Prints the sign of a number
 *
 * @n: Number
 *
 * Return: 1 (is greater than zero) OR 0 (is zero)
 * OR -1 (is less than zero)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
