#include <stdio.h>
/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * - there is one or more chars in the string @b that is not 0 or 1
 * - b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, i = 0, j = 0, found_1 = 0, strLen = 0;
	unsigned int pos_of_first_char_one;

	if (!b)
		return (result);

	while (*(b + i) != '\0')
	{
		if (*(b + i) != '0' && *(b + i) != '1')
			return (0);

		if ((*(b + i) == '1') && !found_1)
		{
			found_1 = 1;
			pos_of_first_char_one = i;
		}

		strLen++;
		i++;
	}

	i = strLen - 1;

	while (i >= pos_of_first_char_one)
	{
		result += (*(b + i) - '0') << j;

		j++;

		if (i == 0)
			break;
		i--;
	}

	return (result);
}
