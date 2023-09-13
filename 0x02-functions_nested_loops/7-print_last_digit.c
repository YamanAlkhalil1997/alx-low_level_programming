
#include "main.h"

/**
 * main - entry point
 *
 * Description: print all single digit numbers
 *
 * Return: Always 0 (Success)
*/

int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		lastDigit = -1 * (n % 10);
	else
		lastDigit = n % 10;

	_putchar(lastDigit + '0');
	return (lastDigit);
}
