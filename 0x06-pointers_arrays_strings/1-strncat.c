#include "main.h"

/**
 * _strncat - concatenates two strings.
 *
 * @dest: destination string.
 * @src: source string.
 * @n: number of characters will be copied src to dest.
 *
 * Return: destination string.
 */

char	*_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
