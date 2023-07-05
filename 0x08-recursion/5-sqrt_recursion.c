#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: the number
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);
    if (n == 0 || n == 1)
        return (n);
    return (sqrt_helper(n, 1));
}

int sqrt_helper(int n, int i)
{
    if (i * i == n)
        return (i);
    if (i * i > n)
        return (-1);
    return (sqrt_helper(n, i + 1));
}


