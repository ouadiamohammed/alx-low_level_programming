#include "main.h"

/**
 * print_alphabet - read description.
 *
 * Description: this function prints the alphabet in lowercase
 *
 * Return: no return.
 */

void	print_alphabet(void)
{
	char	c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
