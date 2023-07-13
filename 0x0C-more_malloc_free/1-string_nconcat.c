#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: number of bytes
 * Return: pointer points to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length, i, j;
	char *s;

	length = strlen(s1);
	s = malloc(sizeof(char) * (length + n) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0, j = 0; i < length + n; i++)
	{
		if (i < length)
		{
			s[i] = s1[i];
		}
		else
		{
			s[i] = s2[j++];
		}
	}
	s[length + n] = '\0';
	return (s);
}
