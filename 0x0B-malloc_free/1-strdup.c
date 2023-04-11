#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string wich is a duplicate of str.
 *
 * @str: pointer to the giving string.
 *
 * Return: Null if str= NULL and there is not avaliable memory.
 *         or a pointer to the newly allocated space in memory.
 */

char *_strdup(char *str)
{
	int i = 0;
	int size = 0;
	char *new_str;

	if (!str)
		return (NULL);
	while (str[size] != '\0')
		size++;

	new_str = malloc(sizeof(char) * (size + 1));
	if (!new_str)
		return (NULL);

	while (str[i] != '\0')
	{
		new_str[i] = str[i];
		i++;
	}
	return (new_str);
}
