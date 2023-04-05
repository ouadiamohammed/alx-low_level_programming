#include "main.h"

/**
 * factorial - returns the factorial of giving number.
 *
 * @n: giving number.
 *
 * Return: integer.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1); /*error*/
	else if (n == 0 || n == 1)
		return (n);
	else
		return (n * factorial(n - 1));
}
