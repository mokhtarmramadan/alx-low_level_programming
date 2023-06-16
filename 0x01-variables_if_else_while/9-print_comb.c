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
		if (n == 57)
		{
			putchar(n);
			n++;
		}
		else
		{
		putchar(n);
		putchar(44);
		putchar(32);
		n++;
		}
	} while(n < 58);

	return (0);
}
