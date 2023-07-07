#include "main.h"

/**
 * _islower - takes c parameter and check if it is lower
 * @c: the parameter
 * Return: 1 if lower or 0 if not lower
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
