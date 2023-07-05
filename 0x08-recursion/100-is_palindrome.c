#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * is_palindrome - Check if the string is palindrome
 * @s: the string
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int len;

	if (*s == '\0' || *(s + 1) == '\0')
	{
		return (1);
	}
	len = strlen(s);

	if (*s != s[len - 1])
	{
		return (0);
	}
	else
	{
		char *new_s;
		int i;

		new_s = malloc(len - 2);
		for (i = 1; i < len - 1; i++)
		{
			new_s[i - 1] = s[i];
		}

		new_s[i - 1] = '\0';

		return (is_palindrome(new_s));
	}

}
