#include "main.h"

/**
 * print_sign - Prints the sign of the a number
 * @n: is the number we want to check
 * Return: 1 if it's positive, 0 if it's 0 or -1 if it was negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
