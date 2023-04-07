#include "main.h"

/**
 * _islower - read description
 *
 * @c: is the giving character.
 *
 * Description: this function checks if @c is lowercase.
 *
 * Return: 1 if @c is lowercase.
 *         0 if it's not.
 */

int	_islower(int	c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
