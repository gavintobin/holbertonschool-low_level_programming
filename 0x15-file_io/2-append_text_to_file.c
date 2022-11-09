#include "main.h"


/**
 * append_text_to_file - appends text at end of file
 * @filename: file
 * @text_content: content
 * Return: stuff
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "\0";

	write(fd, text_context, strlen(text_content));
	close(fd);

	return (1);
}

