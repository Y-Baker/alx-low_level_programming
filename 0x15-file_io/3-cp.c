#include "main.h"
#include <string.h>
#define BUFF_SIZE 1024
/**
 * main - program to cp text in file to anthor one
 * @argc: the number of arguments
 * @argv: array to the arguments
 * Return: 0 if success
 * 97: if the number of argument is not the correct one
 * 98: if file_from does not exist, or if you can not read it
 * 99: if you can not create or if write to file_to fails
*/

int main(int argc, char *argv[])
{
	int fd[2], stat_rd, stat_wr;
	int istatus, ostatus;
	char *ms, buffer[BUFF_SIZE];
	mode_t mode;

	ms = "Usage: cp file_from file_to\n";
	mode = S_IWUSR | S_IRUSR | S_IRGRP | S_IWGRP | S_IROTH;
	if (argc != 3)
		write(STDERR_FILENO, ms, strlen(ms)), exit(97);
	fd[0] = open(argv[1], O_RDONLY);
	if (fd[0] == -1)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
	fd[1] = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd[1] == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	do {
		stat_rd = read(fd[0], buffer, BUFF_SIZE);
		if (stat_rd == -1)
			dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
		stat_wr = write(fd[1], buffer, (ssize_t) stat_rd);
		if (stat_wr == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	} while (stat_rd > 0);
	istatus = close(fd[0]);
	if (istatus == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd[0]), exit(100);
	ostatus = close(fd[1]);
	if (ostatus == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd[1]), exit(100);
	return (0);
}
