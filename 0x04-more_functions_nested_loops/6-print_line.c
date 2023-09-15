#include "main.h"

/**
 * main - entry point
 *
 * Description: print all single digit numbers
 *
 * Return: Always 0 (Success)
*/

int print_line(int n)
{
	int lnChr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnChr = 1; lnChr <= n; lnChr++)
			_putchar('_');
		_putchar('\n');
	}
}
