#include "main.h"

/**
 * _strlen - find lenght of string.
 * @s: pointer to giving string.
 * Return: integer.
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + (_strlen(s)));
}

/**
 * compare - compares i nad j for match.
 * @i: index starting from left of string moving forwards.
 * @j: index starting from right of string moving backwards.
 * Return: 1if palidrome, 0 if not.
 */

int	compare(char *i, char *j)
{
	if (i >= j)
		return (1);
	if (*i == *j)
		return (compare(i + 1, j - 1));

	return (0);
}

/**
 * is_palindrome - checks if palindrome.
 * @s: pointer to string to be ckecked.
 * Return: 1 if palindrome, 0 if not.
 */

int	is_palindrome(char *s)
{
	int len = _strlen(s);

	return (compare(s, (s + len - 1)));
}
