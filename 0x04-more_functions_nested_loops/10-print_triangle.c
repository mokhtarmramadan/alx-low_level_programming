#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: takes int size as an arrgument
 * Return: void
 */
void print_triangle(int size)
{
	int i, k, j;

	for (i = 1; i <= size + 1; i++)
	{

		for (k = size - i; k > 1; k--)
		{
			_putchar(32);
		}

		for (j = 0; j < i; j++)
		{
			_putchar(35);
		}
		_putchar(10);
	}

}
