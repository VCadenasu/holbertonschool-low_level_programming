#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Print the string in reverse
 * @s: String
 * Result: String reversed
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
