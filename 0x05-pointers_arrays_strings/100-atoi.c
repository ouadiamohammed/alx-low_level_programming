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
	int sign = -1;
	int result = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			if (result < 0)
				result = (result * 10) - (s[i] - '0');
			else
				result = (s[i] - '0') * -1;
			if (s[i+1] < 48 || s[i+1] > 57)
				break;
		}
		i++;
	}
	return (result * sign);
}
