#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: integer, length of @argv
 *
 * @argv: one-dimensional array of strings, arguments of this program
 *
 * Return: 0, success
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);

	}
	else
	{
		int result = 0;
		int amount  = atoi(argv[1]);

		if (amount < 0)
		{
			printf("0\n");
			return (0);
		}

		while (amount)
		{
			if (amount >= 25)
			{
				result += amount / 25;
				amount %= 25;
			}
			else if (amount >= 10)
			{
				result += amount / 10;
				amount %= 10;
			}
			else if (amount >= 5)
			{
				result += amount / 5;
				amount %= 5;
			}
			else if (amount >= 2)
			{
				result += amount / 2;
				amount %= 2;
			}
			else
			{
				result += 1;
				amount = 0;
			}
		}

		printf("%d\n", result);
	}

	return (0);
}
