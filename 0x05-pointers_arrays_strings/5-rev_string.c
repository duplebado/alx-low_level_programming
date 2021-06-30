#include "holberton.h"

/**
 * rev_string - reverses a string
 *
 * @s: String to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	
	while (s[i])
		i++;
	int j = i / 2;
	int right = 0;

	while (right != j)
	{
		char temp = s[right];
		int left = i - right + 1;
		s[right] = s[left];
		s[left] = temp;	
		right ++;
	}
}


