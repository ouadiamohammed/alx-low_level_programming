#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - read description.
 *
 * @n: giving integer.
 *
 * Description: this function prints all natural numbers from @n to 98.
 *
 * Return: void
 */

void	void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
}
