#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Prints the last digit of a number
 * @n: the number passed to the funciton
 * Return: the last digit
 */
int print_last_digit(int n)
{
	if (n >= 0)
	{
		n = n % 10;
		_putchar('0' + n);
		return (n);
	}
	else
	{
		n = (-n) % 10;
		_putchar('0' + n);
		return (n);
	}
}
