#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: The name of the file
 * @text_content: A NULL terminated string to add at the end
 * of the file
 *
 * Return: On success 1 is returned; Otherwise -1 is returned
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t ret_write;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content != NULL)
		ret_write = write(fd, text_content, strlen(text_content));
	if (ret_write < 0)
		return (-1);
	return (1);
}
