#include "holberton.h"

/**
 * _islower - checks for lowercase character
 *
 * @c: A number to be checked
 *
 * Return: 1 (Success) OR 0 (Failure)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
