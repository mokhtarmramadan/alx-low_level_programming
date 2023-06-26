#include <stdio.h>
#include "main.h"

void print(char *s)
{

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar(10);
}

int main(void)
{
	char *s = "Hello world";
	print(s);
	return (0);
}
