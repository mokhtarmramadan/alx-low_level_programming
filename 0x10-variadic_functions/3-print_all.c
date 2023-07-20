#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_all - a function that prints anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i, n, length;
	float f;
	char c, t;
	char *s;
	va_list ap;

	length = strlen(format);
	va_start(ap, format);
	i = 0;
	while (i  < length)
	{
		switch (format[i])
		{
			case 's':
				s = va_arg(ap, char *);
				if (s != NULL)
				{
					printf("%s", s);
					break;
				}
				printf("(nil)");
				break;
			case 'c':
				c = va_arg(ap, int);
				printf("%c", c);
				break;
			case 'i':
				n = va_arg(ap, int);
				printf("%d", n);
				break;
			case 'f':
				f =  va_arg(ap, double);
				printf("%f", f);
				break;
			default:
				break;
		}
		t = format[i];
		if (i != length - 1 && (t == 'i' || t == 'f' || t == 'c' || t == 's'))
		{
			printf(", ");
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
