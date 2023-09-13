#include "main.h"

/**
 * _islower - function to check if
 *		character is lowercase
 *
 * @c: checks input of function
 *
 * Return: retuns 1 if `c` is lowercase
 *		otherwise always 0 (succes)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 1222)
		return (1);
	return (0);
}
