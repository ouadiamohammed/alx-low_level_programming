#include "main.h"

/**
 * _strcpy - copies the string pointed by src,
 *           including '\0', to buffer pointed to by dest.
 *
 * @dest: destination string.
 * @src: source string.
 *
 * Return: dest.
 */

char	*_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i++] = '\0';
	return (dest);
}
