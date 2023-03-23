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
	int	i = 0;

	while (i <= n)
	{
		if (n <= 0)
			_putchar('\n');
		else
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
