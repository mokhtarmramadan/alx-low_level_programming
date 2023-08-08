#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *filename);
void close_file(int fd);

/**
 * close_file - closes files
 * @fd: file discriptor
 * Return: void
 */
void close_file(int fd)
{
	int closed;

	closed = close(fd);

	if (closed == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * create_buffer - creates a buffer
 * @filename: the name of the read from file
 * Return: a pointer to the buffer
 */
char *create_buffer(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(2, "Error: Can't read from file %s\n", filename);
		exit(99);
	}
	return (buffer);
}

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 1 (success)
 */
int main(int argc, char **argv)
{
	int fd_to, fd_from, bytes, written;
	char *buffer;

	if (argc != 3)
	{
		write(2, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	buffer = create_buffer(argv[1]);
	bytes = read(fd_from, buffer, 1024);
	fd_to = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (fd_from == -1 || bytes == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}

	written = write(fd_to, buffer, bytes);

	if (fd_from == -1 || written == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[2]);
		free(buffer);
		exit(98);
	}
	close_file(fd_to);
	close_file(fd_from);
	free(buffer);
	return (0);
}
