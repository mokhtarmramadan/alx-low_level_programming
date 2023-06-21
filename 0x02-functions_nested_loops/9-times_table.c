#include "main.h"
#include <stdio.h>

void main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i ++)
	{
		for (j = 0; j < 10; j ++)
		{
			printf("%d,", (i * j));
		}
		printf("\n");
	}
}
