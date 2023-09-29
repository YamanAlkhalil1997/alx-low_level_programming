#include "main.h"

/**
 * last_index - return the last index of a string counts the char
 * @s: pointer the string
 * return: int
*/
int is_palindrome(char *s);
int check(char *s, int start, int end, int mod);
int last_index(char *s)
{
int n = 0;

if (*s > '\0')
	n += last_index(s + 1) + 1;

return (n);
}

/**
 * asd asda sda sda sdasd
 * asd
 * asdas
 * d
 * asd asd
*/

int is_palindrome(char *s)
{
int end = last_index(s);

return (check(s, 0, end - 1, end % 2));
}

/**
 *
 * asdf
 *
 * sdf
 * s
 * df
*/
int is_palindrome(char *s)
{
int end = last_index(s);

return (check(s, 0 ,end - 1, end % 2));
}
