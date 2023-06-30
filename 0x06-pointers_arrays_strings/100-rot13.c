#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @x: is the string pointer
 * Returns: a string pointer
 */
char *rot13(char *x)
{
	int i;

	i = 0;
	while (x[i] != '\0')
	{
		while ((x[i] >= 65 && x[i] <= 90) || (x[i] >= 97 && x[i] <= 122))
		{
			if ((x[i] >= 65 && x[i] <= 77) || (x[i] >= 97 && x[i] <= 109))
			{
				x[i] = (int) x[i] + 13;
				break;
			}
			else
			{
				x[i] = (int) x[i] - 13;
				break;
			}
			x[i] = x[i];
		}

		i++;
	}

	return (x);
}
