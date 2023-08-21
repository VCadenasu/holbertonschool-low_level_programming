#include "main.h"

/**
 * *_strcpy - Copies the string
 * @dest: to
 * @src: from
 * Return: String
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
		l++;
	for ( ; x < l; x++)
		dest[x] = src[x];
	dest[l] = '\0';
	return (dest);
}
