#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long i;
	unsigned long k = 1;
	unsigned long j = 2;

	printf("%lu, %lu, ", k, j);

	for (i = 0; i < 96; i++)
	{
		unsigned long n = k + j;

		k = j;
		j = n;
		if (i == 95)
		{
			printf("%lu", n);
			break;
		}
		printf("%lu, ", n);
	}
	printf("\n");
	return (0);
}

