#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
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
	return (0);
}
