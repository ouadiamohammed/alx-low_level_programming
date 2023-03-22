#include <stdio.h>

/**
 * main - prints the first 20 Fibonacci numbers, starting
 *        with 1 and 2.
 *
 * Return: 0.
 */

int	main(void)
{
	int	i = 0;
	long int sum;
	long int a, b;

	while (i < 49)
	{
		sum = a + b;
		printf("%li, ", sum);
		a = b;
		b = sum;
		i++;
	}
	sum = a + b;
	printf("%li\n", sum);
	return (0);
}
