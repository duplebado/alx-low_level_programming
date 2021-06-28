#include "holberton.h"

/**
 * print_number - prints an integer with putchar
 *
 * @n: Integer - input
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		n++;
		n = -n;
		num = n + 1;
	}
	else
	{
		num = n;
	}

	if (num / 10)
		print_number(num / 10);

	_putchar(num % 10 + '0');
}
