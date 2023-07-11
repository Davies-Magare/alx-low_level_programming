#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: The name of the file
 * @text_content: A string to add to the end of the file
 *
 * Return: On success return 1
 * Otherwise, return 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t ret;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content != NULL)
	{
		ret = write(fd, text_content, strlen(text_content));
		if (ret == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
