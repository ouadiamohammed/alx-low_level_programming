#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 *
 * @str: pointer points to a variable s of type char.
 *
 * Return: string.
 */

char	*rot13(char *str)
{
	char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *ptr;
	int i = 0;

	ptr = str;

	while (*str != '\0')
	{
		i = 0;
		while (i < 53)
		{
			if (*str == input[i])
			{
				*str = output[i];
				break;
			}
			i++;
		}
		str++;
	}
	return (ptr);
}
