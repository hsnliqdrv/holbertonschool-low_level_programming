#include <unistd.h>

/**
 * _dputchar - writes the character c to file
 * @fd: file to write
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _dputchar(int fd, char c)
{
	return (write(fd, &c, 1));
}
