#include "function_pointers.h"

/**
 * print_name - Write a function that prints a name
 * @name: name we want to print
 * @f: a function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}

