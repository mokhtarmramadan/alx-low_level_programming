#include "main.h"

/**
 * _isdigit - Checks for a digit (0 through 9)
 * @c: the integer we want to check
 * Return: 1 (Success) 0 (Failure)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
