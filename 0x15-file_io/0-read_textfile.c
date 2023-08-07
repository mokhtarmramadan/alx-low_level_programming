#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to POSIX standard output
 * @filename: is the file pointer
 * @letters: number of letter we'll print
 * Return: actual number of letters it read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t numbers;
	char *buffer;
	size_t printed;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	numbers = 0;
	buffer = malloc(sizeof(char) * letters);
	numbers = read(fd, buffer, letters);
	printed = write(1, buffer, numbers);
	if (printed != numbers)
	{
		return (0);
	}
	free(buffer);
	close(fd);

	return (printed);
}

