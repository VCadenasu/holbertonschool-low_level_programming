#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - Gives the sum of all parameters.
 * @n: quantity of variables
 * @...: Represent the variables
 * Return: Returns the sumatory of variables or 0 if non.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int i, tot = 0;

	va_start(sum, n);

	for (i = 0; i < n; i++)
		tot += va_arg(sum, int);

	va_end(sum);
	return (tot);
}
