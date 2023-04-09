#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 *
 * @argc: counter.
 * @argv: array of pointers to arguments.
 *
 * Return: 0 for succes and 1 for error.
 */

int main(int argc, char *argv[])
{
	int result = 0;

	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}

	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);

	return (0);
}
