#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 97;
	int n = 48;

	do {
		putchar(n);
		n++;
	} while (n < 58);
	do {
		putchar(i);
		i++;
	} while (i < 103);
	putchar('\n');
	return (0);
}
