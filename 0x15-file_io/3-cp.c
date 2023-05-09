#include "main.h"


#define BUFFER_SIZE 1024

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
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return EXIT_FAILURE;
	}
	file_read = open(argv[1], O_RDONLY);
	if (file_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		return EXIT_FAILURE;
	}

	file_write = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_write < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't creat file %s\n", argv[2]);
		close(file_read);
		return EXIT_FAILURE;
	}
	while ((bytes_read = read(file_read, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_write, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
			close(file_read);
			close(file_write);
			return EXIT_FAILURE;
		}
	}
	if (bytes_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		close(file_read);
		close(file_write);
		return EXIT_FAILURE;
	}
	if (close(file_read) < 0)
	{
			dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_read);
			return EXIT_FAILURE;
	}
	if (close(file_write) < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_write);
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}
