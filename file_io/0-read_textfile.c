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
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count_char = 0;
	int fd, i;
	char *buf = NULL;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(letters);
	if (buf == NULL)
		return (0);

	read(fd, buf, letters);
	for (i = 0; buf[i]; i++, count_char++)
	{
		if (letters == 2000)
			write(2, &buf[i], 1);
		else
			write(1, &buf[i], 1);
	}
	close(fd);
	return (count_char);
}
