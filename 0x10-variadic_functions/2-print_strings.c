#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints numbers
 * @separator: pointer to the string to be printed between strings
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list params;

	va_start(params, n);

	for (i = 0; i < (n - 1) && n != 0; i++)
	{
		if (!separator)
			printf("%s", va_arg(params, char *) ? va_arg(params, char *) : "(nil)");
		else
			printf("%s%s", va_arg(params, char *) ? va_arg(params, char *) : "(nil)", separator);
	}

	if (n)
		printf("%s\n", va_arg(params, char *) ? va_arg(params, char *) : "(nil)");
	else
		printf("\n");

	va_end(params);
}
