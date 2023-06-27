#include "main.h"

/**
 * rev_string -  a function that reverses a string
 * @s: a string pointer
 * Return: void
 */
void rev_string(char *s)
{
	char *temp = s;
	char *ptr;
	while (*temp != '\0')
	{
		temp++;
	}

	while (temp > s)
	{
		temp --;
		*ptr = *temp;
		ptr ++;
	}
	*s = *ptr;
}
