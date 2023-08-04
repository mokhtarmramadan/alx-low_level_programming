#include "main.h"

/**
 * clear_bit - clears bits
 * @n: unsigned long int pointer
 * @index: the index
 * Return: (1) if success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	*n &= ~(1UL << index);
	return (1);
}

