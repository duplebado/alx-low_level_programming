#include "holberton.h"

void print_string(char *str);

/**
 * main - entry point, prints its name
 *
 * @argc: integer, length of @argv
 *
 * @argv: one-dimensional array of strings, arguments of this program
 *
 * Return: 0, success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	print_array_elements(argv[0]);
	_putchar('\n');

	return (0);
}

/**
 * print_string - prints all char of a string
 *
 * @str: pointer to string
 *
 * Return: void
 */

void print_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
