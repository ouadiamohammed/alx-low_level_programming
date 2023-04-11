#include <stdlib.h>
#include <stdio.h>

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
 * _strncpy - copies a string.
 *
 * @dest: destination string.
 * @src: source string.
 * @n: number of characters should be copied.
 *
 * Return: destination string.
 */

char	*_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	for (; n > i; i++)
		dest[i] = '\0';
	return (dest);
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
	int i, j, len = 0, pos = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		len += _strlen(av[i] + 1);

	str = malloc(sizeof(char) * len);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		_strncpy(str + pos, av[i], strlen(av[i]));
		pos += strlen(av[i]);
		str[pos++] = '\n';
	}
	str[pos] = '\0';
	return (str);
}
