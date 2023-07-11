#include "main.h"

/**
 * create_file - creates a file
 * @filename: The name of the file
 * @text_content: A string to write to th file
 *
 * Return: On success, 1
 * Otherwise, return -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t ret_w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (text_content != NULL)
		ret_w = write(fd, text_content, strlen(text_content));
	if (ret_w == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}

