#include <unistd.h>

/**
 * _putchar - writes the character c to student
 * @c: the character to print
 *
 * return in sucsses 1
 * on error, 1 is returned and error is set apper
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
