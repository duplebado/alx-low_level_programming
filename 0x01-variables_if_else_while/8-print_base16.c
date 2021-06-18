#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; num < 'q'; c++)
	{
		if (c < 'k')
			putchar(num + '0');
		else
			putchar(num - 10);
	}
	putchar('\n');
	return (0);
}
