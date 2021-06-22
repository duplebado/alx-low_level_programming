#include "holberton.h"

/**
 *  main - Print the word "Holberton"
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	char school_name[] = "Holberton";

	while (i < 9)
	{
		_putchar(school_name[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
