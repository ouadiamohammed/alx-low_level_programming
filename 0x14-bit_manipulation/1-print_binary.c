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
		num = n >> i;
		if (num & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j)
			_putchar('0');
		i--;
	}
	if (j == 0)
		_putchar('0');
}
