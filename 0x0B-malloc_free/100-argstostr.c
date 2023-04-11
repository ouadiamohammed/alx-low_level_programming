#include <stdlib.h>

/**
 * _strlen - calculate the lenght of a string.
 * @str: pointer to giving string.
 * Return: length of string.
 */

int	_strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * argstostr - concatenates all the arguments of the program.
 *
 * @ac: counter of arguments.
 * @av: pointer to an array of strings.
 *
 * Return: NULL if ac = 0, av == NULL or if fails.
 *         pointer to the new string.
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k;
	int len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		len += _strlen(av[i]);
	len += (ac + 1);

	str = malloc(sizeof(char) * len);

	if (!str)
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
