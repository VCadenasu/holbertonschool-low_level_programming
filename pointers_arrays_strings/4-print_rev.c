#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints the string in reverse
 * @s: points dthe string
 * Return: Prints in reverse
 */

void print_rev(char *s)
{
	int len = 0;
	int i;

	while (*s != 0)
	{
		len++;
		s++;
	}
	s--;
	for (i = len; i >= 0; i--)
	{
		putchar(*s);
		s--;
	}
	putchar(10);
}
