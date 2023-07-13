#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * @min: the min number
 * @max: the max number
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int bytes, i;
	int *p;

	if (min > max)
	{
		return (NULL);
	}

	bytes = (max - min) + 1;
	p = malloc(sizeof(int) * bytes);

	if (p == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (min <= max)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}

