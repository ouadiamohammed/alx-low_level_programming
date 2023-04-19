#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function.
 *
 * @argc: arguments counter.
 * @argv: pointer to array of arguments.
 *
 * Return: 0 for succes.
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int bts;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bts = atoi(argv[1]);
	if (bts < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (i < bts)
	{
		printf("%02x", *((unsigned char *)main + i));
		i++;
		if (bts > i)
			printf(" ");
	}
	printf("\n");
	return (0);
}

