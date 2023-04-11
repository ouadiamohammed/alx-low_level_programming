#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 *
 * @s1: pointer to the first giving string.
 * @s2: pointer to the second giving string.
 *
 * Return: Null if concatenation failed.
 *         pointer to the newly allocated space in memory.
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int size1 = 0;
	int size2 = 0;
	char *conc_str;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[size1])
		size1++;

	while (s2[size2])
		size2++;
	size2++;

	conc_str = malloc(sizeof(char) * (size1 + size2));
	if (conc_str == NULL)
		return (NULL);
	while (i < size1)
	{
		conc_str[i] = s1[i];
		i++;
	}

	while (j < size2)
	{
		conc_str[i] = s2[j];
		j++;
		i++;
	}
	return (conc_str);
}
