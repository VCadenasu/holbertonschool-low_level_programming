#include <stdio.h>

/**
 * main - entry input
 * @argc: count elementes
 * @argv: element selected
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
