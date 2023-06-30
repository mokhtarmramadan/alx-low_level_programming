#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 * @x: A pointer for the string
 * Return: a string
 */
char *cap_string(char *x)
{
	int i;

	i = 0;
	while (x[i] != 0)
	{
		if ((x[i] == ' ' || x[i] == ',' || x[i] == ';' || x[i] == '.' || x[i] == '!'
					|| x[i] == '?' || x[i] == '"' || x[i] == '(' || x[i] == ')'
					|| x[i] == '{' || x[i] == '}') && (x[i + 1] >= 97 && x[i + 1] <= 122))
		{
			x[i + 1] = (int) x[i + 1] - 32;
			i++;
		}
		else if (x[i] == 9 && x[i + 1] >= 97 && x[i + 1] <= 122)
		{
			x[i] = ' ';
			x[i + 1] = x[i + 1] - 32;
			i++;
		}
		else
		{
			i++;
		}
	}

	return (x);
}
