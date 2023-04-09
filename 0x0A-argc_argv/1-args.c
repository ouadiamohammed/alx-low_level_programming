#include <stdio.h>

/**
 * main - prints the number of arguments passed into.
 *
 * @argc: counter.
 * @argv: array of pointers to arguments.
 *
 * Return: 0 for succes.
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
