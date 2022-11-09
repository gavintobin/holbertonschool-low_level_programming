#include "main.h"


/**
 * read_textfile - prints file to posix
 * @filename: file
 * @letters: leters
 * Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int fd;
	ssize_t readcount = 0;
	ssize_t writecount = 0;

	if (filename == NULL)
		return (0);
	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
        if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	readcount = read(fd, buffer, letters);
	if (readcount == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	writecount = write(STDOUT_FILENO, buffer, readcount);
	if (writecount == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	free(buffer);
	return (writecount);
}
