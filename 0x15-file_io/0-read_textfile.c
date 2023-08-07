#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: The textfile pathname
 * @letters: The number of letters to be read and printed
 *
 * Return: On Success, The actual number of letters that were
 * read and printed, Otherwise 0 is returned
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd_ret, writ_ret;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buffer = (char *)malloc(letters);
	if (buffer == NULL)
		return (0);
	rd_ret = read(fd, buffer, letters);
	if (rd_ret < 0)
		return (0);
	writ_ret = write(STDOUT_FILENO, buffer, rd_ret);
	if (writ_ret < 0)
		return (0);
	free(buffer);
	return (rd_ret);
}
