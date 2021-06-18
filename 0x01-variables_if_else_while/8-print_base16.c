#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c < 'q'; c++)
	{
		if (c < 'k')
			putchar(c + '0');
		else
			putchar(c - 10);
	}
	putchar('\n');
	return (0);
}
