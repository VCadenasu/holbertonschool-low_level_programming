#include "main.h"
#include <stdlib.h>

/**
 * *create_array - a program to create an array
 * @size: size of the variable.
 * @c: character to print.
 * Return: 0 if null or a pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
