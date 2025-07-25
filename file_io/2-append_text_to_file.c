#include "main.h"
#include <unistd.h>
/**
 * append_text_to_file - appens to a file
 * @filename: name of file
 * @text_content: text to be appended
 *
 * Return: when success 1, else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (!text_content)
		return (1);
	while (text_content[i])
	{
		if (write(fd, text_content + i, 1) != 1)
			return (-1);
		i++;
	}
	return (1);
}
