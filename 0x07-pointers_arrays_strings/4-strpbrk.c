#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: The orignal string
 * @accept: the substring
 * Return: a pointer for a substring
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
			{
				return (s);
			}
			j++;
		}
		s++;
	}
	return ("NULL");

}
