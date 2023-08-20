#include "main.h"

/**
 * swap_int - sawp the variables values.
 * *Return: Swap elements
 */

void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
	return;
}
