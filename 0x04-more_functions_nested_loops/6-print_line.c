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
			putchar('\n');
		else
		{
			putchar('_');
			i++;
		}
	}
	putchar('\n');
}
