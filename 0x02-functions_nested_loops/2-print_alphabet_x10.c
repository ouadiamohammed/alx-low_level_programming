#include "main.h"

/**
 * print_alphabet_x10 - read description.
 *
 * Description: this function prints the alphabet in lowercase
 *              10 times.
 *
 * Return: no return.
 */
void	print_alphabet_x10(void)
{
	char	c;
	int	i = 0;

	while (i < 10)
	{
		c = 'a';
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
		i++;
	}
}
