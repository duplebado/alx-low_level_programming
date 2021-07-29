/**
 * _strLen - gets the length of a string
 * @str: pointer to a string
 * Return: int, number of characters in @str
 */
int _strLen(char *str)
{
	int i = 0;

	while (str[i])
		i++;

	return (i);
}
