#include <stdio.h>

/**
 * main - read description
 *
 * Description: this program prints the alphabet in reverse in lowercase,
 *    followed by a new line.
 *
 * Return: it return 0;
 */
int	main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
