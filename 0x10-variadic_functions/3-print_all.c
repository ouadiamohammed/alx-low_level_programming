#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * printf_c - prints character.
 *
 * @args: list of arguments.
 *
 * Return: Nothing (void).
 */

void	printf_c(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * printf_i - prints an integer.
 *
 * @args: list of arguments.
 *
 * Return: Nothing (void).
 */

void	printf_i(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * printf_f - prints float.
 *
 * @args: list of arguments.
 *
 * Return: Nothing (void).
*/

void	printf_f(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * printf_s - prints a string.
 *
 * @args: list of arguments.
 *
 * Return: Nothing (void).
 */

void	printf_s(va_list args)
{
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - prints all types of parameters.
 *
 * @format: type of arguments passed to the function.
 *
 * Return: Nothing (void).
 */

void print_all(const char * const format, ...)
{
	int i, j = 0;
	char *separator = "";
	va_list args;
	datatype choise[] = {
					{'c', printf_c},
					{'i', printf_i},
					{'f', printf_f},
					{'s', printf_s},
					{'\0', NULL} };

	va_start(args, format);
	while (format != NULL && format[j] != '\0')
	{
		i = 0;
		while (choise[i].letter != '\0')
		{
			if (choise[i].letter == format[j])
			{
				printf("%s", separator);
				choise[i].func(args);
				separator = ", ";
			}
			i++;
		}
		j++;
	}
	printf("\n");
	va_end(args);
}
