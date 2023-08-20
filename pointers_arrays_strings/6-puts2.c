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
	int len;
	int i;
	char *n = str;
	
	while(*n != '\0')
	{
		n++;
		len++;
	}
	len--;
	for (i = 1; i <= len; i++)
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
	}
	putchar(10);
}

