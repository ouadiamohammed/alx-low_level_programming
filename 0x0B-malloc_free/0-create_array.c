#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of char, and initializes
 *               it with a specific char.
 *
 * @size: the size of the array.
 * @c: character.
 *
 * Return: NULL if size is 0 or a pointer to the array if succes.
 */

char	*create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *str;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
