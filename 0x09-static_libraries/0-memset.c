#include "main.h"

/**
 * *_menset - fills memory with a constant byte
 * @s: pointer to put the constant
 * @n: constant
 * @n: max bytes to use
 * return: pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; n > 0; itr++, n--)
	{
		s[itr] = b;
	}

	return (s);
}
