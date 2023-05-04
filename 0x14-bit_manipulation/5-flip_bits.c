#include "main.h"

/**
 * flip_bits - returns the number of bits we would need to get
 *             from one number to other.
 * @n: number.
 * @m: number.
 * Return: bits number.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int sum = 0;
	unsigned long int xor = n ^ m;

	while (xor)
	{
		sum += xor & 1;
		xor >>= 1;
	}
	return (sum);
}
