#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: file to write in
 * @text_content: content in the filename
 * Return: 1 (SUCCESS) || -1 (FAILURE)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t byte_write;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		byte_write = write(file, text_content, strlen(text_content));
		if (byte_write == -1)
			return (-1);
	}

	close(file);
	return (1);
}
