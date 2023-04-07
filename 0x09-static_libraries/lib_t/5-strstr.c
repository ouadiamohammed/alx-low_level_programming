#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle
 *			 in the string haystack.
 *
 * @needle: substring.
 * @haystack: string.
 *
 * Return: pointer to the peginning of the located substring
 *		   or NULL if the substring is not found.
 */

char	*_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	if (needle[i] == '\0')
		return (haystack);

	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return (haystack + i);
			j++;
		}
		i++;
	}
	return (0);
}
