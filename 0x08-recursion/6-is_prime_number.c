#include "main.h"

/**
 * is_prime_number - returns 1 if the input is prime number,
 *                   otherwise return 0.
 * @n: giving number.
 * Return: 1 for prime number or 0 for non prime number.
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);
	while (i <= n/i)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}
