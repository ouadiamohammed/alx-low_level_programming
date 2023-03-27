#include "main.h"

/**
 * print_rev - prints string in reverse.
 *
 * @s: giving string.
 *
 * Return: void.
 */

void	print_rev(char *s)
{
	int i = 1;

	while (s[i] != '\0')
		i++;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
