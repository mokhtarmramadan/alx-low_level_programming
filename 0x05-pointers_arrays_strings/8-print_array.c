#include "main.h"
#include <stdio.h>

/**
 * print_array - A  function that prints n elements of an array of integers.
 * @a: the array
 * @n: Number of elements we'll print
 * Return: Void
 */
void print_array(int *a, int n)
{
	int i;

	if (n < 0)
	{
		printf("\n");
		printf("\n");
	}

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
}
