#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic
 * @c: Is the character we need to check
 * Return: 1 if ture (is alpha) or 0 if false (not alpha)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 132) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
