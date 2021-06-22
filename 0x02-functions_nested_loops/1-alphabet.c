#include "holberton.h"

void print_alphabet(void);

/**
 * main - Entry point 
 *
 * Return: Always 0 (Success)
 */
 
int main(void)
{
	print_alphabet();
        return (0);
}

/**
 * print_alphabet - Prints alphabets 'a - z'
 *
 *  Return: void
 */
void print_alphabet(void)
{
	for (char c = 'a'; 'a' <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
