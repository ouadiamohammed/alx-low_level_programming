#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings following by new line.
 *
 * @separator: string to be printed between th strings.
 * @n: number of strings passed to the function.
 *
 * Return: Nothing (void).
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}


