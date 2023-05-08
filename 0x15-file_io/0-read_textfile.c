#include "main.h"


/**
 * read_textfile - reads a text file and prints it to the POSIX
 *                 standard output.
 * @filename: Filename.
 * @letters: number.
 * Return: number of letters if succes or 0 if it fails or doesn
 *         not write the expected
 *         amount of bytes.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_op;
	ssize_t file_read,	file_write;
	char *buffer;

	if (filename == NULL)
		return (0);
	file_op = open(filename, O_RDONLY);
	if (file_op < 0)
		return (0);
	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
		return (0);
	file_read = read(file_op, buffer, letters);
	if (file_read < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[file_read] = '\0';
	file_write = write(STDOUT_FILENO, buffer, file_read);
	if (file_write < 0)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(file_op);
	return (file_write);
}



