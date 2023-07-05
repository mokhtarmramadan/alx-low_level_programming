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
	static int i = 0;
    if (!*s)
        return (1);
    if (is_palindrome(s + 1) == 1 && s[i] == s[strlen(s) - i - 1])
    {
        i++;
        return (1);
    }
    return (0);

}
