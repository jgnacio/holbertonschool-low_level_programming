#ifndef FIO_H
#define FIO_H
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdarg.h>
#include "1-create_file_2.c"
#include "0-read_textfile_2.c"
#include "print_error.c"

ssize_t read_textfile(const char *filename, size_t letters);
char *read_textfile_2(const char *filename);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_error(char *ERR);
#endif
