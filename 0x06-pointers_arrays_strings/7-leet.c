#include "main.h"

/**
 * leet -  function that encodes a string into 1337
 * @x: the string we need to edit
 * Return: a string
 */
char *leet(char *x)
{
	int i;

	i = 0;
	while (x[i] != '\0')
	{
		if (x[i] == 'a' || x[i] == 'A')
		{
			x[i] = 52;
		}
		else if (x[i] == 'e' || x[i] == 'E')
		{
			x[i] = 51;
		}
		else if (x[i] == 'o' || x[i] == 'O')
		{
			x[i] = 48;
		}
		else if (x[i] == 't' || x[i] == 'T')
		{
			x[i] = 55;
		}
		else if (x[i] == 'l' || x[i] == 'L')
		{
			x[i] = 49;
		}
		else
		{
			x[i] = x[i];
		}

		i++;
	}

	return (x);
}
