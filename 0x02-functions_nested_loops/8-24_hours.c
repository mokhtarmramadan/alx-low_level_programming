#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints every minute of the day, starting from 00:00 to 23:59.
 *
 */
void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int x;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i == 2 && j == 4)
			{
				break;
			}
			for (k = 0; k <= 5; k++)
			{
				for (x = 0; x <= 9; x++)
				{
					printf("%d%d:%d%d\n", i, j, k, x);
				}
			}
		}
	}
}
