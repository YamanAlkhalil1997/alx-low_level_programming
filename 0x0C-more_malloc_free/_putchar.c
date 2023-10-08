#include <unistd.h>

/**
 * _putchar - writes the character c of stdout
 * @c: the charcter to print
 *
 * return: on sucsess 1
 * on error, -1 is returned, and errior is set approper
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
