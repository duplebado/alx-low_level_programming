#include "holberton.h"

/**
 * _abs - Computes absolute value of an integer
 *
 * @n: The integer whose absolute value is
 * to be computed
 *
 * Return: absolute value
 */

int _abs(int n)
{
	if (n >= 0)
		return n;
	else
		return n + (n ** 2);
}
