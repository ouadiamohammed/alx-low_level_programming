#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - allocates memory for an array.
 *
 * @s1: pointer to first string.
 * @s2: pointer to second string.
 * @n: number of characters to concat from second string.
 *
 * Return: pointer to concatenated string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int N;
	int i = 0;
	int j = 0;
	int len = 0;

	N = n;

	if (N < 0)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (_strlen(s2) <= N)
		N = _strlen(s2);

	len = _strlen(s1) + N + 1;

	p = malloc(sizeof(*p) * len);

	if (p == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while (j < N)
	{
		p[i + j] = s2[j];
		j++;
	}
	p[i + j] = '\0';
	return (p);
}


