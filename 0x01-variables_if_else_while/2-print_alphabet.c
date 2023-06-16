#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 97;

	do {
		putchar(i);
		i++;
	} while (i < 123);
	putchar('\n');
	return (0);
}
