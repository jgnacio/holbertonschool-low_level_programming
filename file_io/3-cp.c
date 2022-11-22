#include "main.h"
/**
 * main - Function that copy the content of a file to another.
 * @argc: The count of arguments passed.
 * @argv: Arguments passed gets as strings
 *
 * Return: 0 if good ending, 97 if not passed 2 files, 98 if can't read
 * from file, 99 if can't write the file_to and 100 if not close the file.
 */
int main(int argc, char *argv[])
{
	char *f_from_content = NULL;
	int fd_to = 0;
	int close_ = 0;
	char *fd_from_s = NULL, *fd_to_s = NULL;

	if (argc != 3)
	{
		write(2, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}

	fd_from_s = argv[1];
	fd_to_s = argv[2];

	f_from_content = read_textfile_2(fd_from_s);
	if (f_from_content == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fd_from_s);
		exit(98);
	}

	fd_to = create_file(fd_to_s, f_from_content);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fd_to_s);
		exit(99);
	}
	close_ = close(fd_to);
	if (close_ == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
