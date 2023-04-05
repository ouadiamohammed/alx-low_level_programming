#include "main.h"

/**
 * _puts_recursion - prints a string, followed by new line.
 *
 * @s: pointer to the giving string.
 *
 * Return: void.
 */

void	_puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
