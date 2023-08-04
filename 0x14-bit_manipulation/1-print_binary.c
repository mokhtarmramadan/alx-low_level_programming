#include "main.h"
#include <stdio.h>

/**
 * print_binary function that prints the binary representation of a number
 * @n: the number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int i;

	for (i = 1UL << 63; i > 0; i >>= 1)
	{
		if (n & i)
		{
            		_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}
