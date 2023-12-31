#include "main.h"
#include <string.h>

/**
 * create_file - creates files
 * @filename: file name
 * @text_content: a char *
 * Return: 1 Success
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int bytes;

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd != 3)
	{
		return (-1);
	}
	bytes = write(fd, text_content, strlen(text_content));
	if (bytes == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}

