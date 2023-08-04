#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: unsinged int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int count = 0;

	while (x)
	{
		count += x & 1;
		x >>= 1;
	}
	return (count);
}

