#include "main.h"

/**
 * leet - encodes a string into 1337.
 *
 * @str: pointer that points to a giving string.
 *
 * Return: string.
 */

char	*leet(char *str)
{
	char *s = "aeotl";
	char *S = "AEOTL";
	char x[5] = {'4', '3', '0', '7', '1'};
	char *ptr;
	int i;

	ptr = str;

	while (*str != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == *(s + i) || *str == *(S + i))
				*str = x[i];
		}
		str++;
	}
	return (ptr);
}
