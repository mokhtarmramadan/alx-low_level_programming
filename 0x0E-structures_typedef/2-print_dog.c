#include "dog.h"
#include <stdio.h>

/**
 * print_dog - a function that prints a struct dog
 * @d: stuct dog
 * Return: prints dog
 */
void print_dog(struct dog *d)
{
	if (d->name != NULL)
	{
		printf("Name: %s\n", d->name);
	}
	else
	{
		printf("Name: nil\n");
	}

	if (d->age)
	{
		printf("Age: %f\n", d->age);
	}
	else
	{
		printf("Age: nil\n");
	}

	if (d->owner != NULL)
	{
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		printf("Name: nil\n");
	}
}
