#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - A  function that prints half of a string
 *@str: the string pointer
 *Return: void
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int i;
	int count;
	char *temp = str;

	if (length % 2 == 0)
	{
		count = length / 2;
	}
	else
	{
		count = (length - 1) / 2;
		count ++;
	}
	for (i = 0; i < count; i++)
	{
		temp++;
	}

	while (*temp != '\0')
	{
		_putchar(*temp);
		temp++;
	}
	_putchar(10);
}
