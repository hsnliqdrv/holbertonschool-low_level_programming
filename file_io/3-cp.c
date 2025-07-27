#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
/**
 * error_97 - handle error
 */
void error_97(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
/**
 * error_98 - handle error
 * @fn: file name
 */
void error_98(char *fn)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fn);
	exit(98);
}
/**
 * error_99 - handle error
 * @fn: file name
 */
void error_99(char *fn)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fn);
	exit(99);
}
/**
 * error_100 - handle error
 * @fd: file descriptor
 */
void error_100(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
/**
 * main - main function
 * @argc: arg count
 * @argv: arg list
 *
 * Return: 0 if success, else error code
 */
int main(int argc, char **argv)
{
	int fdd, fds;
	char buffer[1024];
	ssize_t r, w;

	if (argc != 3)
		error_97();
	fds = open(argv[1], O_RDONLY);
	if (fds < 0)
		error_98(argv[1]);
	fdd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fdd < 0)
		error_99(argv[2]);
	errno = 0;
	while (1)
	{
		r = read(fds, buffer, 1024);
		if (errno || r < 0 || r > 1024)
			error_98(argv[1]);
		if (r == 0)
			break;
		w = write(fdd, buffer, (size_t) r);
		if (errno || w < r || w < 0)
			error_99(argv[2]);
	}
	if (close(fds) < 0)
		error_100(fds);
	if (close(fdd) < 0)
		error_100(fdd);
	return (0);
}
