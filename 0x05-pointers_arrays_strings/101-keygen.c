#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that generates random valid passwords.
 *
 * Return 0.
 */

int	main (void)
{
	int sum;
	int c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
