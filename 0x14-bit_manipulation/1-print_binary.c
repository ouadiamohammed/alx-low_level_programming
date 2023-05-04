#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: giving number.
 * Return: Nothing(void).
 */

void print_binary(unsigned long int n)
{
	int i = 0;
	int j = 0;
	unsigned long int num;

	i = 63;
	while (i >= 0)
	{
		num = (n >> i) & 1;
		if (num == 1)
			j = 1;
		if (j == 1)
			_putchar(((n >> 1) & 1) + 48);
		i--;
	}
	if (n == 0)
		_putchar('0');
}
