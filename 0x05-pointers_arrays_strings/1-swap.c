#include "main.h"

/**
 * swap_int - Swaps the values of two ints
 * @a: First int
 * @b: Second int
 * Returns: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
