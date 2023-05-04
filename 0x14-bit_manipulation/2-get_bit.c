#include "main.h"

/**
 * get_bit - returns the valus of a bit at a given index.
 * @n: number.
 * @index: bit's index.
 * Return: bit's value.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
