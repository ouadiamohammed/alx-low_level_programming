#include "main.h"

/**
 * create_file - creates a file.
 * @filename: filename.
 * @text_content: string.
 * Return: 1 if succes, -1 if failed.
 */


int create_file(const char *filename, char *text_content)
{
	int file_op, file_write, len;

	len = 0;
	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}
	file_op = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	file_write = write(file_op, text_content, len);

	if (file_op == -1 || file_write == -1)
		return (-1);

	close(file_op);
	return (1);
}
