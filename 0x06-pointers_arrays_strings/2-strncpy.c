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
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	for (; n > i; i++)
		dest[i] = '\0';
	return (dest);
}
