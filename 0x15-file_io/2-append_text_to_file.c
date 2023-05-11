#include "main.h"

/**
 * append_text_to_file - append text to the file if it exits
 * @filename: the name of the file
 * @text_content: the text to add to the file
 * Return: 1 if success, Otherwise -1
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0, status;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (!filename)
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
