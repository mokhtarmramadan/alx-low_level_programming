#include "main.h"
#include <stdio.h>

/**
 * print_sign - Prints the sign of the a number
 * @n: is the number we want to check
 * Return: Always 0 (Success)
 */
int positive_or_negative(int n)
{
        if (n > 0)
        {
                printf("%d is positive\n", n);
        }
        else if (n < 0)
        {
                printf("%d is negative\n", n);
        }
        else
        {
                printf("0 is zero\n");
        }
	return (0);
}
