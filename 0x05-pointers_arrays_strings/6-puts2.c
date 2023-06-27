#include "main.h"

/**
 * puts2 -  function that prints every other character of a string
 * @str: the string
 * Return: void
 */
void puts2(char *str)
{
	char *temp = str;

	while (*temp != '\0')
	{
		_putchar(*temp);
		temp++;
		temp++;
	}
	_putchar(10);
}
