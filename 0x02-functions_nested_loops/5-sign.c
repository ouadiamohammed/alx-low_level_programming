#include "main.h"

/**
 * print_sign - read description.
 *
 * @n: is a giving integer.
 * Description: this function prints the signe of a number.
 *
 * Return: 1 for positive, 0 for 0 and, -1 for negative
 */

int	print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
		_putchar(45);
	return (-1);
}
