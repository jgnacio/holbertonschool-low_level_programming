#include "main.h"

/**
 * main - Function that copy the content of a file in another
 * @argc: The count of argument passed.
 * @argv: The arguments in strings.
 *
 * Return: 0 if good ending.
 */
int main(int argc, char *argv[])
{
	int fd_from = 0, fd_to = 0, char_count = 0, write_check = 0, BUF = 1024;
	char *buf;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		exit(99);
	}

	while ((char_count = read(fd_from, buf, BUF)) != 0)
	{
		if (char_count == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		write_check = write(fd_to, buf, char_count);
		if (write_check == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if ((close(fd_from)) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	else if ((close(fd_from)) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
	free(buf);
	return (0);
}
