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

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			int j = 0;

			while (argv[i][j] != '\0')
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}

				j++;
			}

			result += atoi(argv[i]);
		}

		printf("%d\n", result);
	}

	return (0);
}
