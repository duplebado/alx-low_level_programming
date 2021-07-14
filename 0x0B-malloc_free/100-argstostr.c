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
	int i, j;
	int len = 0;
	int t_length = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return ('\0');

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			t_length++;

		t_length++;
	}

	result = malloc(sizeof(char) * t_length + 1);

	if (result == NULL)
	{
		return ('\0');
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[len++] = av[i][j];
		}
		result[len++] = '\n';
	}

	result[t_length] = '\0';
	return (result);
}
