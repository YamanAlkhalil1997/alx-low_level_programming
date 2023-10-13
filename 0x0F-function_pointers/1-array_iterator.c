#include "function_pointers.h"

/**
 * asd asd asd asd
 * asd
 * asd
 * as
 * d
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array ++ size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
