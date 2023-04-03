#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of square matrix of int.
 *
 * @a: matrix
 * @size: size of the matrix.
 *
 * Return: voiod.
 */

void	print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i = 0;
	int j = 0;

	while (j < size)
	{
		i = (j * size) + j;
		sum1 += a[i];
		j++;
	}

	j = 1;
	while (j <= size)
	{
		i = (j * size) - j;
		sum2 += a[i];
		j++;
	}
	printf("%d, %d\n", sum1, sum2);
}
