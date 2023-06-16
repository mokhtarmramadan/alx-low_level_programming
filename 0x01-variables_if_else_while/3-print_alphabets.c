#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int u = 65;
	int l = 97;

	do {
		putchar(l);
		l++;
	} while (l < 123);
	do {
		putchar(u);
		u++;
	} while (u < 91);
	putchar('\n');
	return (0);
}
