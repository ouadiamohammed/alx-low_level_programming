#include "main.h"

/**
 * rev_string - reverses a string.
 *
 * @s: string to be reversed.
 *
 * Return: void.
 */

void	rev_string(char *s)
{
	char	swap;
	int	i = 0;
	int	len = 0;

	while (s[len] != '\0')
		len++;

	while (i < (len / 2))
	{
		swap = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = swap;
		i++;
	}
}
