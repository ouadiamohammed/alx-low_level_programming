#include <stdio.h>

/**
 * main - read description
 *
 * Description: this program prints all single digit numbers of base 10 starting from 0,
 *    followed by a new line.
 *
 * Return: it return 0;
 */
int	main(void)
{
	char a = '0';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
