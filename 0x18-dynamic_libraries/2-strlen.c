#include "main.h"

/**
 * _strlen - A function that returns the length of a string.
 * @s: A char pionter
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}

	return (length);
}
