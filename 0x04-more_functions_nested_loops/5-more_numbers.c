#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 * Parameters: void
 * Returns: void
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar('0' + j);
			if (i == 9)
			{
				j = 0;
				if (j == 4)
				{
					return;;
				}
				_putchar(i);
			}

		}
		_putchar(10);
	}
}
