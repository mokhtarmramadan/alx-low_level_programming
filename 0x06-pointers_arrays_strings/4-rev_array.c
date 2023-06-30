#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array
 * @a: a pointer to an array
 * @n: How many element are in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	if (n % 2 == 0)
	{
		int i, iteration, temp;

		iteration = n / 2;
		for (i = 0; i < iteration; i++)
		{
			temp = a[i];
			a[i] = a[n - i - 1];
			a[n - i - 1] = temp;
		}

	}
	else if (n % 2 != 0)
	{
		int i, iteration, temp;

		iteration = (n - 1) / 2;

		for (i = 0; i < iteration; i++)
		{
			temp = a[i];
			a[i] = a[n - i - 1];
			a[n - i - 1] = temp;
		}
	}
	else
	{
		return;
	}
}
