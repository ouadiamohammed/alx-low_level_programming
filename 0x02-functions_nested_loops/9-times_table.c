#include "main.h"

/**
 * times_table - read description.
 *
 * Description: this function prints the 9 times table,
 *              starting with 0.
 *
 * Return: nothing will be returned (void).
 */

void	times_table(void)
{
	int j = 0;
	int i;
	int n;

	while (j < 10)
	{
		i = 0;
		while (i < 10)
		{
			n = j * i;
			if (n >= 0 && n <= 9)
			{
				if (i >= 1)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(n + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			i++;
		}
		_putchar('\n');
		j++;
	}
}
