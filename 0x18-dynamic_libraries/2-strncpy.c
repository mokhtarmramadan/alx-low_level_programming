#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @dest: the first string
 * @src: the second string
 * @n: number of bytes to copy
 * Return: a string pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
