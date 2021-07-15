#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: a string to be concatenated
 *
 * @s2: a string to be concatenated
 *
 * @n: number of bytes of @s2 to be concatenated
 *
 * Return: pointer to newly allocated space in memory
 * with the concatenated string (SUCCESS) or
 * NULL if insufficient memory was available (FAILURE)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *strconc;
unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

while (s1 && s1[len1])
len1++;
while (s2 && s2[len2])
len2++;
if (n < len2)
strconc = malloc(sizeof(char) * (len1 + n + 1));
else
strconc = malloc(sizeof(char) * (len1 + len2 + 1));
if (!strconc)
return (NULL);
while (i < len1)
{
strconc[i] = s1[i];
i++;
}
while (i < (len1 + n))
{
strconc[i] = s2[j];
i++;
j++;
}
strconc[i] = '\0';
return (strconc);
}
