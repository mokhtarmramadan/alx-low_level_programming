#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always - (Success)
 */
int main(void)
{
	int n = 48;

	do {
		putchar(n);
		if (n == 57)
		{
			break;
		}
		else
		{
		putchar(44);
		putchar(32);
		n++;
		}
	} while (n < 58);
	putchar('\n');

	return (0);
}
