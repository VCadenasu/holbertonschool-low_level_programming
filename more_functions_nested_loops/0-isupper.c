#include "main.h"

/**
 * isupper - test for an uppercase letter
 * @c: text
 * return: non-zero if c is an uppercase letter, if not 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
