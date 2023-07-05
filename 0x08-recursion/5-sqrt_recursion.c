#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: the number
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	int mid;

	if (n < 1) {
    return -1;
  }

  mid = n / 2;

  if (mid * mid == n) {
    return mid;
  } else if (mid * mid < n) {
    return _sqrt_recursion(mid + 1);
  } else {
    return _sqrt_recursion(mid - 1);
  }
}

