#include "main.h"

/**
 * asdasd asd
 * asd
 * asd
 * asd
*/
char *move_past_star(ch *s2)
{
	if (*s2 == '*')
		return (move_past_star(s2 + 1));
	else
		return (s2);
}


/**
 * asd
 * as
 * dasd
 * asdasd
*/
int inception(char *s1, char *s2)
{
	int ret = 0;

	if (*s1 == 0)
		return (0)
	if (*s1 == *s2)
		ret += wildcmp(s1 + 1, s2 + 1);
		return (ret);
}
/**
 * asd
 * as
 * dasd
 * asd
 * */
int walidcmp(char *s1, char *s2)
{
	int ret = 0;

	if (!*s1 && *s2 == '*' && !*move_past_stat(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = move_past_star(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			ret += wildcmp(s1 + 1, s2 + 1);
		ret += inception(s1, s2);
		return (!!ret);
	}
	return (0);
}
