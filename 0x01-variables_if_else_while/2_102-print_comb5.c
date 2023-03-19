#include <stdio.h>

/**
 * main - read description
 *
 * Description: this is an other solution for the ex102 using
 *              only the putchar function
 *              this version is more easy to read and understand.
 *
 * Return: its returns 0 (success).
 */

int main(void)
{
	int i = 0;
	int j = 0;


	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
