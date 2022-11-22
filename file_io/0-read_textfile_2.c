#include "main.h"
/**
 * read_textfile_2 - Function that reads a text file and prints it to the
 * POSIX standard output.
 * @filename: The name of file to open.
 * @letters: The amount of chars to print.
 *
 * Return: Count of chars prints.
 */
char *read_textfile_2(const char *filename)
{
	int fd;
	char *buf = NULL;
	int read_count = 0;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (NULL);

	buf = malloc(1024);
	if (buf == NULL)
		return (NULL);

	read_count = read(fd, buf, 1024);
	while (read_count)
	{
		read_count = read(fd, buf, 1024);	
	}
	close(fd);
	return (buf);
}
