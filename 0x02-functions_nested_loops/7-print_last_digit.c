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
	n = _abs(n);
	last_digit = n % 10;

	_putchar(last_digit + '0');

	return last_digit;
}
