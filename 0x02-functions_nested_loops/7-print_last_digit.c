#include "holberton.h"

/**
 * print_last_digit - Prints last digit of a number
 *
 * @n: A number
 *
 * Return: last digit of @n
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n = (n * -1);
	last_digit = n % 10;

	_putchar(last_digit + 48);

	return (last_digit);
}
