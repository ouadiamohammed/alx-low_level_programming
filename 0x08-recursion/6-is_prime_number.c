#include "main.h"

/**
 * check_prime - check if num can be divided or not.
 * @n: number to be ckecked.
 * @div: divisor.
 * Return: 1 if prime, 0 if not, or recursive function call.
 */

int	check_prime(int n, int div)
{
	if (n == div)
		return (1);
	if (n % div == 0)
		return (0);
	return (check_prime(n, div + 1));
}

/**
 * is_prime_number - returns 1 if the input is prime number,
 *                   otherwise return 0.
 * @n: giving number.
 * Return: 1 for prime number or 0 for non prime number.
 */

int is_prime_number(int n)
{
	int div = 3;

	if (n % 2 == 0 || n < 2)
		return (0);
	if (n == 2)
		return (1);

	return (check_prime(n, div));
}
