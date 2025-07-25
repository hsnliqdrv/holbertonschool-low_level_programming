#ifndef MAIN_H
#define MAIN_H
#include <fcntl.h>
#include <stddef.h>
#include <sys/types.h>
ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);
int _dputchar(int fd, char c);
int create_file(const char *filename, char *text_content);
#endif
