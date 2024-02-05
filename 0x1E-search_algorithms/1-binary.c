#include <stdio.h>
#include "search_algos.h"


/**
 * binary_search - searches for a value in a sorted array (Binary search)
 * @array: a pointer to the array we want to search
 * @size: size of array
 * @value: the value we're searching for
 * Return: the index of the value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid;
	int guess;

	if (array == NULL)
	{
		return (-1);
	}
	low = 0;
	high = size - 1;

	while (low <= high)
	{
		mid = (high + low) / 2;
		guess = array[mid];
		print_array(array, low, high);
		if (guess < value)
		{
			low = mid + 1;
		}
		else if (guess > value)
		{
			high = mid - 1;
		}
		else
		{
			return (mid);
		}

	}
	return (-1);

}

/**
 * print_array - prints an array
 * @array: the array we want to print
 * @start: the start of the first index we want to print
 * @end: the ending index of our print
 * Return: void
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array:");
	for (i = start; i <= end; i++)
	{
		if (i == end)
		{
			printf(" %d", array[i]);
		}
		else
		{
			printf(" %d,", array[i]);
		}
	}
	printf("\n");
}




















