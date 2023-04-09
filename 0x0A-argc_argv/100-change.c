#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for
 *        an amount of money.
 *
 * @argc: counter of arguments.
 * @argv: array of pointers to arguments.
 *
 * Return: 0 for succes and 1 for error.
 */

int main(int argc, char *argv[])
{
	int coins = 0;
	int num = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num > 0)
	{
		coins += num / 25;
		num = num % 25;
		coins += num / 10;
		num = num % 10;
		coins += num / 5;
		num = num % 5;
		coins += num / 2;
		num = num % 2;
		coins += num / 1;

		printf("%d\n", coins);
	}
	else
		printf("0\n");

	return (0);
}

