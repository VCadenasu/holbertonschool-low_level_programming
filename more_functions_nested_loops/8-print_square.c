#include "main.h"

/**
 * print_square - function to print squares
 * @size: size of square
 * return: prints the square
 */

void print_square(int size)
{
	int x, y;

	y = 0;

	if (size <= 0)
		_putchar('\n');
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			_putchar('#');
			x++;
		}
		_putchar('\n');
		y++;
	}
}
