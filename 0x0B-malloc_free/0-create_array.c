#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c:charcter
 * Return: array pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *buffer;

	if (size <= 0)
	{
		return (NULL);
	}

	buffer = malloc((size + 1) * sizeof(int));

	for (i = 0; i < size; i++)
	{
		buffer[i] = c;
	}
	buffer[size] = '\0';
	return (buffer);
}
