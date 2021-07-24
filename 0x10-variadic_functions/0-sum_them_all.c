#include <stdarg.h>

/**
 * sum_them_all - sum of all its parameters
 * @n: total number of parameters
 * Return: sum of value parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;

	if (n == 0)
		return (sum);

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_args(args, int);

	va_end(args);

	return (sum);
}
