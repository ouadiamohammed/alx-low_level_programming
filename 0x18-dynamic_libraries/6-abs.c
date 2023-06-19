#include "main.h"

/**
 * _abs - read description.
 *
 * @n: input number as an integer.
 *
 * Description: computes the absolute value
 *              of an integer.
 *
 * Return: absolute value.
 */

int	_abs(int	n)
{
	if (n >= 0)
		return (n);
	else
		return (n * (-1));
}
