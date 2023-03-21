#include <stdio.h>

/**
 * main - sum of the multiples of 5 and 3 below 1024.
 *
 * Description:sum of the multiples of 5 and 3 below 1024.
 *
 * Return: 0 (success)
 */

int	main(void)
{
	int i;
	int	sum;

	while (i <= 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
		i++;
	}
}
