#include "main.h"

/**
 * _puts - prints a string, followed by a newline to stdout
 *
 * @str: string parameters to print
 *
 * return: nothing
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putcahr(*str + 0);
		str++;
	}
	_putchar('\n');

}
