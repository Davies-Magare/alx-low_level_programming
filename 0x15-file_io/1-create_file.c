#include "main.h"

/**
 * create_file - creates a file
 * @filename: The name of the file to create
 * @text_content: A NULL terminated string to write to the file
 *
 * Return: On success 1 is returned, Otherwise -1 is  returned.
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t write_ret;
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd < 0)
		return (-1);
	if (text_content != NULL)
		write_ret = write(fd, text_content, strlen(text_content));
	if (write_ret < 0)
		return (-1);
	return (1);
}
