#include <stdio.h>

/**
 * main - read description
 *
 * Description: this program prints the alphabet in lowercase then uppercase
 *    followed by a new line.
 *
 * Return: it return 0;
 */
int	main(void)
{
	char c = 'a';
	char C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}
