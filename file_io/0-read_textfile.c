#include <fcntl.h>
#include <unistd.h>
/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: name of the file
 * @letters: number of letters to read
 *
 * Return: number of characters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char c;
	ssize_t s = 0;
	int fd;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	while (read(fd, &c, 1) > 0 && ((size_t) s) < letters)
	{
		ssize_t w = write(STDOUT_FILENO, &c, 1);

		if (w < 0)
			return (s);
		s += w;
	}
	close(fd);
	return (s);
}
