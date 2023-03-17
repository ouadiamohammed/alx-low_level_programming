#include <stdio.h>

/**
 * main - read description
 *
 * Description: this program prints all possible combinations
 *              of single digit numbers.
 *
 * Return: Always 0.
 */
int	main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}


