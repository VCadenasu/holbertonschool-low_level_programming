#include "main.h"

/**
 * print_most_numbers - Prints all numbers except 2 and 4
 * Return: Print numbers
 */

void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if (a != 50)
		{
			if (a != 52)
			{
				_putchar(a);
			}
		}
	}
	_putchar('\n');
}
