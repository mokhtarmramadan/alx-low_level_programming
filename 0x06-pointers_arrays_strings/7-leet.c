#include "main.h"

/**
 * leet -  function that encodes a string into 1337
 * @x: the string we need to edit
 * Return: a string
 */
char *leet(char *x)
{
	int i;
	int values[20] = {52, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 49, 0, 0, 48,
		0, 0, 0, 0, 55};

	i = 0;
	while (x[i] != '\0')
	{
		while (x[i] == 65 || x[i] == 69 || x[i] == 76 || x[i] == 79 || x[i] == 84
				||  x[i] == 97 || x[i] == 101 || x[i] == 111 || x[i] == 108 ||
				 x[i] == 116)
		{
			if (x[i] == 65 || x[i] == 69 || x[i] == 76 || x[i] == 79 || x[i] == 84)
			{
				x[i] = values[(int) x[i] - 65];
			}
			else
			{
				x[i] = values[(int) x[i] - 97];
			}
		}

		i++;
	}

	return (x);
}
