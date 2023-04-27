#include "lists.h"

/**
 * _strlen - returns the stringlength.
 * @str: giving string.
 * Return: stringlength.
 */

int	_strlen(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}
