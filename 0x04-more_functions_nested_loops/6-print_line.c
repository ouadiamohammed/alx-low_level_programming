#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 *
 * @n: giving integer
 *
 * Return: void.
 */

void	print_line(int n)
{
	int	i = n;

	for (i = n; i > 0; i--)
		_putchar('_');

	_putchar('\n');
}
