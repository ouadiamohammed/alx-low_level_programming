#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n: giving integer
 *
 * Return: void.
 */

void print_diagonal(int n)
{
	int	i = 1;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar(' ');
			i++;
		}
		_putchar('\\');
	}
	_putchar('\n');
}
