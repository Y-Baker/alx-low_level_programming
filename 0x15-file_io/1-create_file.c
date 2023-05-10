#include "main.h"

/**
 * create_file - creat file by system call
 * @filename: name of the file
 * @text_content: the text to write in the file
 * Return: 1 if success, otherwise -1
*/

int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, status;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, S_IWUSR | S_IRUSR);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[len])
			len++;

		status = write(fd, text_content, len);
		if (status == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
