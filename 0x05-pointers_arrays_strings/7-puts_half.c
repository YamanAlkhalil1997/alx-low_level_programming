#include "main.h"

/**
 * puts_half - print second
 * @str: char array string type
 * description: if odd number of chars print length 
*/

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
