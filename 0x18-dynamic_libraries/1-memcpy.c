#include "main.h"
/**
 * _memcpy - copies memory area.
 * @dest: memory that will be copied into.
 * @src: bytes to be copied
 * @n: Number of bytes the funciton copies
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (*dest != '\n')
	{
		while (i < n)
		{
			dest[i] = src[i];
		       i++;
		}
		dest++;
	}
	return (dest);
}
