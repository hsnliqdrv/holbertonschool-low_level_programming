#include "main.h"
#include <unistd.h>
/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: text to write to file
 *
 * Return: 1 if successful, else -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (fd < 0)
		return (-1);
	if (!text_content)
		return (1);
	while (text_content[i])
	{
		if (write(fd, text_content + i, 1) < 0)
			return (-1);
		i++;
	}
	return (1);
}
