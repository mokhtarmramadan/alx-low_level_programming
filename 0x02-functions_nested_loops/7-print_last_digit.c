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
		printf("%d\n", (n % 10));
		return (n % 10);
	}
	else
	{
		printf("%d\n", ((-n) % 10));
		return ((-n) % 10);
	}
}
