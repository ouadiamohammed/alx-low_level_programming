#include <stdio.h>

/**
 * main - read description
 *
 * Description: this program prints the alphabet in lowercase,
 *    followed by a new line.
 *
 * Return: it return 0;
 */
int	main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
