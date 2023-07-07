#include "main.h"

/**
 * _strcpy - A function that copies the string
 * @src: The string will be copied
 * @dest: The distination
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';

	return (dest);
}
