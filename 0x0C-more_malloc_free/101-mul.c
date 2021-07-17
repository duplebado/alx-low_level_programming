#include <stdlib.h>

unsigned int mul(unsigned int n1, unsigned int n2);
unsigned long int getNumber(*str);

/**
 * main - entry point, multiplies two numbers
 *
 * @argc: integer, length of @argv
 *
 * @argv: one-dimensional array of strings, arguments of this program
 *
 * Return: 0, success
 */

int main(int argc, char *argv[])
{
	unsigned long int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = getNumber(argv[1]);

	if (!num1)
	{
		printf("Error\n");
		exit(98);
	}

	num2 = getNumber(argv[2]);

	if (!num2)
	{
		printf("Error\n");
		exit(98);
	}

	printf("%lu\n", mul(num1, num2));
	_putchar('\n');

	return (0);
}

/**
 * getNumber - converts strings to numbers
 *
 * @str: pointer to string of numbers
 *
 * Return: integer (SUCCESS) or
 * NULL, if string includes char
 */

unsigned long int getNumber(char *str)
{
	int i;
	unsigned long int result = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
			result = (result * 10) + (s[i] - '0');
		else
			return ('\0');
	}

	return (result);
}

/**
 * mul - multiply two positive numbers
 *
 * @num1: first positive number
 *
 * @num2: second positive number
 *
 * Return: value of @num1 * @num2
 */

unsigned long int mul(unsigned long int num1, unsigned long int num2)
{
	return (num1 * num2);
}
