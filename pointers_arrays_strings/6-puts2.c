#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts2 - Prints every 2 characters
 * @str: string
 * Return: prints every other character of a string
 */

void puts2(char *str)
{
	int len = 0;
	int i;
	char *n = str;
	int t = 0;
	
	while(*n != '\0')
	{
		n++;
		len++;
	}
	t = len - 1;
	for (i = 1; i <= t; i++)
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
	}
	putchar(10);
}

