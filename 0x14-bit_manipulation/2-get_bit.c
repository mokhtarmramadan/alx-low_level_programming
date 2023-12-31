#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: the number
 * @index: index, starting from 0 of the bit you want to get
 * Return: index or -1 if an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
