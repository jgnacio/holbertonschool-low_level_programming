#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - unction that appends text at the end of a file.
 * @filename: Is the name of the file to modify.
 * @text_content: The text to append in a file.
 *
 * Return: 1 if append nice or -1 if not.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len_count = 0;

	if (!filename)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	len_count = strlen(text_content);
	fd = open(filename, O_RDWR | O_APPEND, 0600);
	if (fd == -1)
		return (-1);

	write(fd, text_content, len_count);
	close(fd);
	return (1);
}
