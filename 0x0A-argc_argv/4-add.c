#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive numbers only.
 *
 * @argc: counter.
 * @argv: array of pointers to agruments.
 *
 * Return: 0 for succes and 1 for error.
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;
	int add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
