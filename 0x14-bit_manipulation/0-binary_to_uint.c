#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned integer.
 * @b: a pointer to the first char in a string of 0 and 1 chars.
 * Return: 0 if b is NULL or it contains other chars not just 0 and 1.
 *         otherwise the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int len = 0;
	unsigned int n = 0;

	if (b == NULL)
		return (0);
	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}
	while (i < len)
	{
		n = n * 2 + (b[i] - 48);
		i++;
	}
	return (n);
}
