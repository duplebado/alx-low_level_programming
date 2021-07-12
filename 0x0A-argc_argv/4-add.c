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
	int result = 0;
	int i = 0;
	int converted_value;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			converted_value = atoi(argv[i]);

			if (!converted_value && *argv[i] != '0')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				result += converted_value;
			}
		}

		printf("%d\n", result);
	}

	return (0);
}
