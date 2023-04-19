#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - calcuator.
 * @argc: arguments counter.
 * @argv: arryay of arguments
 * Return: 0 (succes).
 */

int main(int argc, char **argv)
{
	int a, b, res;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	res = op(a, b);
	printf("%d\n", res);
	return (0);
}

