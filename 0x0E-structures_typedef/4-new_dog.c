#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - a function that creates a new dog.
 * @name: dog name
 * @age: dog age
 * @owner: dog's owner
 * Return: a struct dog_t pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	new_dog->name = strdup(name);
	new_dog->owner = strdup(owner);
	new_dog->age = age;

	if ((*new_dog->name == '\0') || (*new_dog->owner == '\0'))
	{
		return (NULL);
	}
	else if (!age)
	{
		return (NULL);
	}
	else
	{
		return (new_dog);
	}
}
