#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: times
 * result: Print the line
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\0');
	} else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
