#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: String
 * Return: Reverses a string
 */

void rev_string(char *s)
{
	char rev = s[0];
	int contador = 0;
	int i;

	while (s[contador] != '\0')
		contador++;
	for (i = 0; i < contador; i++)
	{
		contador--;
		rev = s[i];
		s[i] = s[contador];
		s[contador] = rev;
	}
}
