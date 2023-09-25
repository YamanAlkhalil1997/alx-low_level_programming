#include "main.h"

/**
 * print_chessboard - prints chessborad
 *
 * @a: rows
 * return: nothing
*/
void print_chessboard(char (*a)[8])
{
	int itr, jtr;

	for (itr = 0; itr < 8l itr++)
	{
		for (jtr = 0; jtr < 8; jtr++)
		{
			_putchar(a[itr][jtr]);
		}
		_putchar('\n');
	}
}
