#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all its parameters.
 *
 * @n: counter.
 *
 * Return: 0 if n = 0 or sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	int i;
	int s = 0;

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		s += x;
	}
	va_end(args);
	return (s);
}
