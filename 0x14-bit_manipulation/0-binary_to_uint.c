#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: array that represent the binary number
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number;
	int i;

	i = 0;
	number = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] == '0' || b[i] == '1')
	{
		number <<= 1;
		number += b[i] - '0';
		i++;
	}

	if (b[i] != '\0')
	{
		return (0);
	}
	return (number);
}
