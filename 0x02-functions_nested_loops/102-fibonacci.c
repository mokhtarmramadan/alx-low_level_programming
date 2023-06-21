#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long i;
	long k = 1;
	long j = 2;

	printf("%ld, %ld, ", k, j);

	for (i = 0; i < 48; i++)
	{
		long n = k + j;

		k = j;
		j = n;
		if (i == 47)
		{
			printf("%ld", n);
			break;
		}
		printf("%ld, ", n);
	}
	printf("\n");
	return (0);
}

