#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - dog data type
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog's owner name
 *
 * Description: Dog datatype
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * struct dog_t - dog data type
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog's owner name
 *
 * Description: Dog datatype
 */
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;

void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* #ifndef _DOG_H_ */
