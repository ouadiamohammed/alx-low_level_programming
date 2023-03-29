#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a: array of integers.
 * @n: number of elements of the array.
 *
 * Return: void.
 */

void	reverse_array(int *a, int n)
{
	int swap;
	int i = 0;

	while (i < (n / 2))
	{
		swap = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = swap;
		i++;
	}
}
