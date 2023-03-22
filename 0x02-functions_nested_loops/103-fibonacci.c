#include <stdio.h>

/**
 * main - prints the sum of all even Fibonacci numbers below 4,000,000
 *
 * Return: Always 0.
 */

int main(void)
{
	long int total_sum, sum, a, b;

	total_sum = 0;
	sum = 0;
	a = 0;
	b = 1;

	while (sum < 4000000)
	{
		sum = a + b;
		if (sum % 2 == 0)
		{
			total_sum += sum;
		}
		a = b;
		b = sum;
	}

	printf("%li\n", total_sum);

	return (0);
}
