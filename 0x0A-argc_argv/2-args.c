#include <stdio.h>

/**
 * main - prints all arguments it receives.
 *
 * @argc: counter.
 * @argv: array of pointers to arguments.
 *
 * Return: 0 for succes.
 */

int	main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
