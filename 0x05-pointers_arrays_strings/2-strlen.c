#include <stdio.h>
#include "holberton.h"

/**
 * _strlen - returns string length
 * @s: string whose length is to be returned
 * Return: Integer
 */

int _strlen(char *s)
{
	int length = 0;
	printf("%c\n", *s++);
	// while (*s[length] != '\0')
		length++;

	return (length);
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;
    int len;

    str = "Holberton!";
    len = _strlen(str);
}
