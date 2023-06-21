#include "main.h"
#include <stdio.h>
/**
 * print_to_98 -  prints all natural numbers from n to 98.
 * @n: is the number passed to the function
 * Return: Always void
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		printf("%d, ", n);
		n--;
		print_to_98(n);
	}
	else if (n < 98)
	{
		printf("%d, ", n);
		n++;
		print_to_98(n);
	}
	else
	{
		printf("%d\n", n);
	}
}
