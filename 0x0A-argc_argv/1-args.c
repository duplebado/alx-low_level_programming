#include "holberton.h"

void print_number(int num);

/**
 * main - entry point, prints it's name
 *
 * @argc: integer, length of @argv
 *
 * @argv: one-dimensional array of strings, arguments of this program
 *
 * Return: 0, success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	print_number(--argc);
	_putchar('\n');
	return (0);
}

/**
 * print_number - prints number with _putchar
 *
 * @num: integer, number to be printed
 *
 * Return: void
 */

void print_number(int num)
{
	if (num / 10)
		print_number(num / 10);

	_putchar(num % 10 + '0');
}
