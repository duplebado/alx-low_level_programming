#include "holberton.h"

/**
 * print_alphabet - Prints alphabets 'a - z'
 *
 *  Return: void
 */

void print_alphabet_x10(void)
{
	for (int i = 0; i <=10; i++)
	{	
        	for (char c = 'a'; 'a' <= 'z'; c++)
        	{
                	_putchar(c);
        	}
        	_putchar('\n');
	}
}
