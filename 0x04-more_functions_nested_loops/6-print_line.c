#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: How long is the line
 * Returns: void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar(10);
	}
	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar(10);
}
