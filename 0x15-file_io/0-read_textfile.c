#include "main.h"

/**
 * read_textfile - reads a textfile and prints it to the POSIX standard output
 * @filename: A file
 * @letters: The number of letters to read and print
 *
 * Return: On success, the number of characters read and printed
 * Otherwise, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd;
	ssize_t ret;
	int retw;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	buffer = (char *)malloc(letters);
	if (buffer != NULL)
	{
		ret = read(fd, buffer, letters);
		retw = write(1, buffer, letters);
	}
	free(buffer);
	close(fd);
	if (retw == -1 || ret != letters)
		return (0);
	return (ret);
}
