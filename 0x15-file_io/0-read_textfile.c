#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: pointer to file descriptor
 * @letters: numbers of letters
 * Return: number of letters could be read & printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	ssize_t byte_read, byte_write;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}

	byte_read = read(file, buffer, letters);
	if (byte_read == -1)
		return (0);

	byte_write = write(STDOUT_FILENO, buffer, byte_read);
	if (byte_write == -1 || byte_write != byte_read)
		return (0);

	close(file);
	return (byte_write);
}
