#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - adds two numbers @a and @b
 * @a: a number
 * @b: a number
 * Return: sum of @a and @b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference of @a and @b
 * @a: a number
 * @b: a number
 * Return: difference of @a and @b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: a number
 * @b: a number
 * Return: product of @a and @b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides @a by @b
 * @a: a number
 * @b: a number
 * Return: result of the division of @a by @b without remainder
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - calculates the remainder of @a divided by @b
 * @a: a number
 * @b: a number
 * Return: remainder of @a divided by @b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
