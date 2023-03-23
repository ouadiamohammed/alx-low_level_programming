#include "main.h"

/**
 * print_square - prints a square followed by new line.
 *
 * @size: giving integer.
 *
 * Return: void.
 */

void print_square(int size)
{
	int i = 1;
	int j;

	if (size > 0)
	{
		while (i <= size)
		{
			j = 1;
			while (j <= size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
