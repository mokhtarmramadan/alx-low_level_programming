#include "main.h"
/**
 * _isupper - checks for uppercase character.
 * @c: Takes c integer as parameter
 * Return: 1 (Success) 0 (Failure)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
