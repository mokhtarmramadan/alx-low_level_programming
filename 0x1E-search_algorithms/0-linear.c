#include <stdio.h>
#include "search_algos.h"


/**
 * linear_search - searches for a value in an array of integers (linear search)
 * @array: pointer to the first element of the array to search in
 * @size: Size of the array
 * @value: the value we're searching for
 * Return: the index of value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			return (i);
		}
		else
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		}
	}
	return (-1);
}
