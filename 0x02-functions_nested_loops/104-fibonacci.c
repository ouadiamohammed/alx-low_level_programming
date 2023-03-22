#include <stdio.h>

/**
 * main - read description
 *
 * Description: this program that finds and prints
 *              the first 98 Fibonacci numbers.
 *
 * Return: 0.
 */

int	main(void)
{
	int a = 1;
	int b = 2;
	int sum = 0;
	int i = 0;

	printf("%d, %d, ", a, b);
	for (i = 2; i < 98; i++)
	{
		sum = a + b;
		printf("%d", sum);
		if (i < 97)
			printf(", ");
		a = b;
		b = sum;
	}
	printf("\n");
	return (0);
}
