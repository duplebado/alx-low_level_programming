#include "holberton.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: character to be checked
 *
 * Return: 1 (it's uppercase) else 0 (not uppercase)
 *
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return 0;
}
