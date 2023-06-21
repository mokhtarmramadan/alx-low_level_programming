#include <stdio.h>

int main(void)
{
	int i;

	for (i = 1023; i >= 0; i--)
	{
		if (i % 2 == 0 || i % 3 == 0)
		{
			printf("%d", i);
		}
	}
	printf("\n");
}
