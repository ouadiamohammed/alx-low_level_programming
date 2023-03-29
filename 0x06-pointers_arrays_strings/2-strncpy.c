#include "main.h"

/**
 * _strncpy - copies a string.
 *
 * @dest: destination string.
 * @src: source string.
 * @n: number of characters should be copied.
 *
 * Return: destination string.
 */

char	*_strncpy(char *dest, char *src, int n)
{
	int i;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
