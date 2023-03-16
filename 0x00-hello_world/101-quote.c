#include <unistd.h>

/**
 * main - Entry point.
 *
 * Description: this program prints a String using the Function write.
 * Return: it returns 1.
 */
int	main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int len = sizeof(str) - 1;

	write(2, &str, len);
	return (1);
}
