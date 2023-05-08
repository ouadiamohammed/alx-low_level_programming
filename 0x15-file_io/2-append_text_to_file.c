#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: filename.
 * @text_content: string.
 * Return: -1 if filename is NULL, it fails or filename doesn't exist.
 *          1 on succes.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_op, file_write, len;

	len = 0;
	if (filename == NULL)
		return (-1);
	file_op = open(filename, O_WRONLY | O_APPEND);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}
	file_write = write(file_op, text_content, len);
	if (file_op < 0 || file_write < 0)
		return (-1);

	close(file_op);
	return (1);
}
