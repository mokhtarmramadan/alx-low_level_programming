#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: the buffer
 * @b: constant will be filled with
 * @n: number of indexes filled
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	k = 0;
	while (k < 98)
	{
		while (k < n)
		{
			s[k] = b;
			k++;
		}
		k++;
	}
	return (s);
}
