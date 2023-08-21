#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion -  Function that prints a string
 * @s: string
 * Return: prints the string
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		putchar(10);
}
