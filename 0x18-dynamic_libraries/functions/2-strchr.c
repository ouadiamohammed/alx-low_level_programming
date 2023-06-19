#include "main.h"

/**
 * _strchr - locates a character in a string.
 *
 * @s: giving string.
 * @c: character to be finde .
 *
 * Return: a pointer to the first accurrence of the character.
 */

char	*_strchr(char *s, char c)
{
	while (*s)
	{
		s++;
		if (*s == c)
			return (s);
	}
	return (0);
}
