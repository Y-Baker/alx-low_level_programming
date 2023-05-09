#include "main.h"

/**
 * read_textfile - read from file
 * @filename: the name of the file
 * @letters: the size
 * Return: the printed number
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t wr_count = 0, rd_return;
	int fd;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	rd_return = read(fd, buffer, letters);
	wr_count = write(STDOUT_FILENO, buffer, rd_return);

	if (rd_return != wr_count || rd_return == -1 || wr_count == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (wr_count);
}
