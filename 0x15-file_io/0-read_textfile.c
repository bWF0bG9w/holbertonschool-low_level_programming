#include "holberton.h"

/**
 *
 *
 *
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t wr, rd;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}

	rd = read(fd, buff, letters);
	if (rd == -1)
	{
		return (0);
	}
	close(fd);

	wr = write(STDOUT_FILENO, buff, rd);

	return (wr);
}
