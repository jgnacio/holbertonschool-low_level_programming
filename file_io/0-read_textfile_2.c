#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - Function that reads a text file and prints it to the
 * POSIX standard output.
 * @filename: The name of file to open.
 * @letters: The amount of chars to print.
 *
 * Return: Count of chars prints.
 */
char *read_textfile_2(const char *filename)
{
	int fd, i;
	char *buf = NULL;
	int read_file = 1;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(1024);
	if (buf == NULL)
		return (NULL);

	while (read_file)
	{
		read(fd, buf, 1024);
		for (i = 0; i <= 1024; i++)
		{
			if (!buf[i])
			{
				read_file = 0;
				break;
			}
		}
	}
	close(fd);
	return (buf);
}
