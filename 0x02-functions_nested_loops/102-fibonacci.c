#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int k = 1;
	int j = 2;

	printf("%d, %d, %d, ", k, k, j);

	for (i = 0; i < 43; i++)
	{
		int n = k + j;

		k = j;
		j = n;
		printf("%d, ", n);
	}
	printf("\n");
	return (0);
}

