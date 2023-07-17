#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: pointer to the strcut
 * @name: name of the dog
 * @age: dog age
 * @owner: dog owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
