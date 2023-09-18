#include "main.h"

/**
 * _strncat - t concatenates two strings.
 * @dest: the first string pointer
 * @src: the second string pointer
 * @n: The n bytes will be concatenated
 * Return: a pointer to the new string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
