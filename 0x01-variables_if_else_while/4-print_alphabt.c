#include <stdio.h>

/**
 * main - read description
 *
 * Description: this program prints the alphabet in lowercase,except q and e
 *    followed by a new line.
 *
 * Return: it return 0;
 */
int	main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
			c++;
		}
		else
			c++;
	}
	putchar('\n');
	return (0);
}
