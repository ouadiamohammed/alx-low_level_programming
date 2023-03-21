#include "main.h"

/**
 * print_last_digit - read description.
 *
 * @n: is a giving integer.
 *
 * Description: this function prints the last digit of a number.
 *
 * Return: it returns the last digit.
 */

int	print_last_digit(int	n)
{
	int ld = n % 10;

	if (ld >= 0)
		return (ld);
	else
		return (ld * (-1));
}
