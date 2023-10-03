#include "main.h"

/**
 * *_strchr - filsememory with a constant byte
 * @s: pinter to put the constant
 * @c: constant
 * return: pointer to s
*/

char *_strchr(char *s, char c)
{
	int itr;

	for (itr = 0; s[itr] >= '\0' ; itr++)
	{
		if (s[itr] == c)
		{
			return (s + itr);
		}
	}
	return ('\0');
}
