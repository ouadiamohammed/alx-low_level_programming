#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string s
 *			  of any of the bytes in the string accept.
 *
 * @s: string.
 * @accept: character to look for.
 *
 * Return: a pointer to the byte.
 */

char	*_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j];
				return (s + i);
			j++;
		}
		i++;
	}
	return (0);
}
