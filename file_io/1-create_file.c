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
	int fd;
	int len_cont = 0;

	if (!filename)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	len_cont = strlen(text_content);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	write(fd, text_content, len_cont);
	close(fd);
	return (1);
}
