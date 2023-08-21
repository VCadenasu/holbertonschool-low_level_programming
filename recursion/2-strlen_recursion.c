#include "main.h"

/**
 * _strlen_recursion - Gives the total characters of a sting
 * @s: string
 * Return: Length of a string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
