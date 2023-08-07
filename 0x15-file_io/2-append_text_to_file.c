#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file name
 * @text_content: a string pointer
 * Return: 1 Success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int bytes;
	int size;

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_APPEND | O_WRONLY);

	if (fd != 3)
	{
		return (-1);
	}
	size = strlen(text_content);
	bytes = write(fd, text_content, size);
	if (bytes == -1 || bytes != size)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
