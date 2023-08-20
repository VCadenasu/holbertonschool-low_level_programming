#include "main.h"
#include <stdio.h>

/**
 * _puts - output of characters and strings
 * @str: pointer string
 * Return: Prints a string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
	putchar(10);

}
