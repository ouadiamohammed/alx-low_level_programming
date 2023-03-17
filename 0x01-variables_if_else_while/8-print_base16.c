#include <stdio.h>

/**
 * main - read description
 *
 * Description: this program prints all the numbers
 *     of base 16 in lowercase, followed by a new line.
 *
 * Return: it return 0;
 */
int	main(void)
{
	char a = '0';
	char c = 'a';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
