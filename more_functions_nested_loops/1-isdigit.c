#include "main.h"

/**
 * _isdigit - Checks for a digit
 * @c: variable
 * Return: 1 if digit or 0 if not.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
