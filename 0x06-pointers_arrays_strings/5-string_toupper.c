#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @x: The string pointer
 * Return: a string
 */
char *string_toupper(char *x)
{
	int i;

	i = 0;
	while (x[i] != '\0')
	{
		if ((int) x[i] <= 97 && (int) x[i] >= 122)
		{
			x[i] = (int)  x[i] - 32;
			i++;
		}
		else
		{
			i++;
		}
	}

	return (x);
}
