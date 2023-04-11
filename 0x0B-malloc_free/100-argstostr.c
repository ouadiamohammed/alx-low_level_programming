#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _strlen - get the lenght of a giving string.
 *
 * @str: pointer to string.
 *
 * Return: the length of the giving string.
 */

int	_strlen(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

/**
 * argstostr - concatenates all giving arguments.
 *
 * @ac: arguments counter.
 * @av: pointer to the arguments.
 *
 * Return: pointer to array.
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	int len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		len += _strlen(av[i]);

	len = len + (ac + 1);
	str = malloc(sizeof(char) * len);

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
			str[k++] = av[i][j];
		str[k++] = '\n';
	}
	return (str);
}
