#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <string.h>

/**
 * struct dog - struct that contains the dog info
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

/**
 * struct dog_t - struct that contains a dog info
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
