#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 *
 * @s1: a string to be concatenated
 *
 * @s2: a string to be concatenated
 *
 * Return: pointer to newly allocated memory
 * which is equal to @s1 + @s2 (SUCCESS) OR
 * NULL (FAILURE)
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int s1_length = 0;
	unsigned int s2_length = 0;
	char *alloc_mem;
	unsigned int i, j;

	while (*(s1 + s1_length) != '\0')
		s1_length++;

	while (*(s2 + s2_length) != '\0')
		s2_length++;

	s1_length++;
	s2_length++;

	alloc_mem = malloc((s1_length * sizeof(*s1)) + (s2_length * sizeof(*s2)));

	if (alloc_mem == NULL)
		return ('\0');

	for (i = 0; i < s1_length; i++)
		alloc_mem[i] = *(s1 + i);

	for (j = 0; j < s2_length; j++, i++)
		alloc_mem[i] = *(s2 + j);
}
