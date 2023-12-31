#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints a struct
 * @d: ponint a struct
 */

void print_dog(struct dog *d)
{
	const char *NIL = "nil";

	if (d == NULL)
		return;
	if ((*d).name == NULL)
		printf("Name: (%s)\n", NIL);
	else
		printf("Age: %s\n", (*d).name);

	printf("Age: %f\n", (*d).age);
	if ((*d).owner == NULL)
		printf("Owner: (%s)\n", NIL);
	else
		printf("Owner: %s\n", (*d).owner);
}
