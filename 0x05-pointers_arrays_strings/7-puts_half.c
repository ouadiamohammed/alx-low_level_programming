#include "main.h"

/**
 * puts_half - prints half of a string.
 *
 * @str: giving string.
 *
 * Return: void
 */

void	puts_half(char *str)
{
	int len = 0;
	int i = 0;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 1)
	{
		i = (len - 1) / 2;
		i += 1;
	}
	else
		i = len / 2;

	while (str[i] != '\0')
	{
		_putchar[i];
		i++;
	}
	_putchar('\n');
}
