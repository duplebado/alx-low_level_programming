#include "holberton.h"

/**
 * _isupper - check for uppercase character
 *
 * @c: character to be checked
 *
 * Return: 1 OR  0
 *
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
