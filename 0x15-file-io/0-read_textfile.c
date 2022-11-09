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
	int fd, wr;
	ssize_t sz;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

	buff = (char *)malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	sz = read(fd, buff, letters);
	if (sz == -1)
		return (0);

	buff[sz] = '\0';
	wr = write(STDOUT_FILEND, buff, sz);
	if (wr == -1)
		return (0);

	free(buff);
	close(fd);
	return (sz);
}

