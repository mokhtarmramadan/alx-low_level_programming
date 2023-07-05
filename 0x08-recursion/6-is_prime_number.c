#include "main.h"

/**
 * is_prime_number - checks if the number was prime
 * @n: the number
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	int mid;

	if (n < 2)
	{
		return(0);
	}

      	mid = n / 2;

	if (mid * mid == n)
	{
		return (0);
	}
	else if (mid * mid - 1 != n)
	{
		is_prime_number(n - 1);
	}
	else
	{
		return (1);
	}
	return (0);
}
