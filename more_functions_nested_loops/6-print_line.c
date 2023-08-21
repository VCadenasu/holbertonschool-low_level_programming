#include "main.h"

/**
 * print_line - function to draw lines
 * @n: number of lines
 * return: straight lines
 */

void print_line(int n)
{
	int c;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (c = 1; c <= n; c++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
