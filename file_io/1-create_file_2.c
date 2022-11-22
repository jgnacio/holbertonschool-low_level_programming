#include "main.h"
/**
 * create_file - Function that creates a file.
 * @filename: The name of the file to create.
 * @text_content: The content of the file create.
 *
 * Return: -1 if file is not create and 1 other case.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int len_cont = 0;
	int close_ = 0;

	if (!filename)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	len_cont = strlen(text_content);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (fd == -1)
		return (-1);

	write(fd, text_content, len_cont);
	close_ = close(fd);
	if (close_ == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (1);
}
