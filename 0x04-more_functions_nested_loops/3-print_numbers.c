#include "holberton.h"

/** 
 * print_numbers - prints 0 - 9
 *
 * Return: void
 */

void print_numbers(void)
{
	int num;

	for (num = '0'; num < 9 ; num++)
		_putchar(num);

	_putchar('\n');
}
