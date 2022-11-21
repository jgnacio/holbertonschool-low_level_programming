#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - Function that creates a file.
 * @filename: The name of the file to create.
 * @text_content: The content of the file create.
 *
 * Return: -1 if file is not create and 1 other case.
 */
int create_file(const char *filename, char *text_content)
{
	struct stat st;
	int fd;
	int len_cont = strlen(text_content);

	if (!filename)
		return (-1);

	fd = stat(filename, &st);
	if (fd == 0)
		return (1);

	fd = open(filename, O_RDWR | O_CREAT);

	write(fd, text_content, len_cont);
	return (1);
}
