#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 *
 * @x: number.
 * @y: power.
 *
 * Return: -1 if the number < 0, power of the number giving.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1); /*error*/
	if (x == 0)
		return (0);
	if (x == 1 || y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
