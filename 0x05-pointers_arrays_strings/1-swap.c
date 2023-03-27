#include "main.h"

/**
 * swap_int - swaps the value of two integers.
 *
 * @a: pointer.
 * @b: pointer.
 * Return: void.
 */

void	swap_int(int *a, int *b)
{
	int c = 0;

	c = *a;
	*a = *b;
	*b = c;
}
