#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: number of arguments
 * Return: the sum of args
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;
	int sum;

	if (n == 0)
	{
		return (0);
	}

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			sum = i;
		}

		sum += va_arg(nums, int);
	}
	va_end(nums);
	return (sum);
}

