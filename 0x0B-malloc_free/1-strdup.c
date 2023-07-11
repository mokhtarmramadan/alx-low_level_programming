#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - allocates space in memory, which contains a copy of the string
 * @str: The string passed
 * Return: string pointer
 */
char *_strdup(char *str)
{
	int length, i;
	char *s;

	length = strlen(str);

	if (length <= 0)
	{
		return (NULL);
	}

	s = malloc((length + 1) * sizeof(char));


	for (i = 0; i < length; i++)
	{
		s[i] = str[i];
	}
	s[length] = '\0';
	return (s);
}
