#include "main.h"

/**
 * *malloc_cheked - allocates memory using malloc and exit if faild
 * @b: int
 * return: pointer to the array intilized or NULL
*/

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);

	return (m);
}
