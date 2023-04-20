#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by new line.
 *
 * @separator: string to be printed between numbers.
 * @n: number of int passed to the function.
 *
 * Return: Nothing(void).
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int value = va_arg(args, int);

		printf("%d", value);

		if (i < (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
