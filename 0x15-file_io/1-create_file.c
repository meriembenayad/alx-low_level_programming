#include "main.h"
/**
 * create_file - Creates a file
 * @filename: file created
 * @text_content: content in the file
 * Return: 1 (SUCCESS) || -1 (FILE_NOT_CREATED/NOT_BE_WRITEN)
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t byte_write;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
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
