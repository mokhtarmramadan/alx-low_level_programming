#include "main.h"

/**
 * print_rev -  A function that prints a string, in reverse.
 * @s: the string pointer
 * Return: void
 */
void print_rev(char *s)
{
	char *temp = s;

	while (*temp != '\0')
	{
		temp++;
	}

	while (temp > s)
	{
		temp--;
		_putchar(*temp);
	}
	_putchar(10);
}
