#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: newly allocated space in memory which contains the contents of s1,
 * followed by the contents of s2
 */
char *str_concat(char *s1, char *s2)
{
	int length_s1, length_s2, i, j;
	char *s;

	length_s1 = strlen(s1);
	length_s2 = strlen(s2);
	s = malloc((length_s1 + length_s2 + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0, j = 0; i < length_s1 + length_s2; i++)
	{
		if (i < length_s1)
		{
			s[i] = s1[i];
		}
		else
		{
			s[i] = s2[j++];
		}
	}

	return (s);
}
