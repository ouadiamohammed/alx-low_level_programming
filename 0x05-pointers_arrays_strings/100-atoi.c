#include "main.h"

/**
 * _atoi - convert a string to an integer.
 *
 * @s: giving string.
 *
 * Return: integer.
 */

int	_atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
			i++;
		}
		else
			i++;

		while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
		{
			result *= 10;
			result += s[i] - 48;
			i++;
		}
	}
	return (result * sign);
}
