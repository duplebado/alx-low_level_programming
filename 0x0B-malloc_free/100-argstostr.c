#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 *
 * @ac: argument total count
 *
 * @av: pointer to arguments
 *
 * Return: pointer to concatenated string (SUCCESS) or
 * NULL if @ac == 0 or @av == NULL (FAILURE) or
 * NULL if if insufficient memory was available (FAILURE)
 */


char *argstostr(int ac, char **av)
{
	int i, j, t_length;
	char *result;

	if (ac == 0 || av == NULL)
		return ('\0');

	for (i = 1; i < ac; i++)
	{
		j = 0;

		while (av[i][j] != '\0')
		{
			t_length++;
			j++;
		}

		t_length++;
	}

	result = malloc(1 + sizeof(char) * t_length);

	if (result == NULL)
		return ('\0');

	for (i = 1; i < t_length; i++)
	{
		j = 0;

		while (av[i][j] != '\0')
		{
			result[i - 1] = av[i][j];
			j++;
			i++;
		}

		result[i - 1] = '\n';
	}

	result[t_length] = '\0';
}
