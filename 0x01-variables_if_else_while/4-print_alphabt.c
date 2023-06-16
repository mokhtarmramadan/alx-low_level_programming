#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 97;

	do {
		if (n == 101 || n == 113)
		{
			n++;
		}
		else
		{
			putchar(n);
			n++;
		}
	} while (n < 123);
	putchar('\n');
	return (0);
}
