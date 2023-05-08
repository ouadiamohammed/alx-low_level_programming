#include "main.h"

/**
 * main - entry point.
 *
 * @argc: counter of arguments.
 * @argv: arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int file_read, file_write;
	int i, j, k;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FLENO, "Usage: cp file_from file_to\n");

	file_read = open(argv[1], O_RDONLY);
	if (file_read < 0)
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);

	file_write = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((i = read(file_read, buffer, 1024)) > 0)
	{
		if (file_write < 0 || write(file_write, buffer, i) != i)
		{
			dprint(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
			close(file_read);
			exit(99);
		}
	}
	if (i < 0)
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", file_write);

	j = close(file_read);
	k = close(file_write);

	if (j < 0 || k < 0)
	{
		if (j < 0)
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_read);

		if (k < 0)
			dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_write);
	}
	return (0);
}
	return (0);
}
