#include "main.h"

/**
 * _strlen - Total amount of characte of string
 * @s: String variable
 * Return: Lenght of the string.
 */

int _strlen(char *s)
{
	int contador = 0;

	while (*s != 0)
	{
		contador++;
		s++;
	}
	return (contador);
}
