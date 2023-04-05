#include "main.h"

/**
 * str_check - checks if strings are identical.
 * @s1: first string.
 * @s2: second string.
 * @i: index.
 * @j: index.
 * Return: 1 if string is palindrome, 0 if not.
 */

int	str_check(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (str_check(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (str_check(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (str_check(s1, s2, i + 1, j) || str_check(s1, s2, i, j + 1));
	return (0);
}

/**
 * wildcmp - checks if strings are indentical.
 * @s1: string.
 * @s2: string.
 * Return: 1 if strings are considered identical.
 */

int wildcmp(char *s1, char *s2)
{
	return (str_check(s1, s2, 0, 0));
}
