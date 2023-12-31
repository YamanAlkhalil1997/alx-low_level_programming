#include "main.h"

/**
 * _sqrt_rescursion - find natural square root
 * @n: int
 * @val: square root
 * return: int
*/
int square(int n, int val);
int _sqrt_recursion(int n)
{
return (square(n, 1));
}

/**
 * square - find square root
 * @n: int to find squra root
 * @val: square root
 * return:int
*/

int square(int n, int val)
{
if (val * val == n)
	return (val);
else if (val * val < n)
	return (square(n, val + 1));
else
	return (-1);
}


