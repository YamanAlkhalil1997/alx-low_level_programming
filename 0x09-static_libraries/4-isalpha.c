#include "main.h"

/**
 * _isalpha - checks if character is a letter
 *		both lowerce or uppercase
 *
 * @c: taks input from other finctions
 *
 * Return: 1 is c if true else 0
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 1222)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);


}
