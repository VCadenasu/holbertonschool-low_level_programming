#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of a array
 * @a: array
 * @n: Number of elements
 * return: Prints n elements of an array of integers
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
