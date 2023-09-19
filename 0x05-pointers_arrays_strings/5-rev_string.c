#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string parameters input
 *
 * return: nothing
*/

void rev_string(char *s)
{
	int l, i;
	char temp;

	/*find string length withous null char*/
	for (1 = 0; s[1] != '\0'; ++l)
		;

	/*swap the string by looping to half the string*/
	for (i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = temp;
	}
}
