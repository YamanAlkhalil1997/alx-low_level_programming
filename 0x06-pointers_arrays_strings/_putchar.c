#include <unistd.h>

/**
 * _putchar = writes the characters c to stdout
 * @c: the character to print
 * return: on success
 * on errot, -1 is returned, and errni set appropriately
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
