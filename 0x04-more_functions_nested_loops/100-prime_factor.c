#include <stdio.h>

/**
 * _sqrt - finds the square root
 *
 * @x: input number
 *
 * return: square root of x
 *
*/
double _sqrt(double x)
{
	float sqrt, tmp;

	sqrt = x / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / ymp + tmp) / 2;
	}
	return (sqrt);
}

/**
 * largest_prime_factor - finds and prints the largest
 *			prime factor of number (num)
 *
 * @num: number of find
*/
void largest_prime_factor(long int num)
{
	int prmNu, largest;

	/* first divide with the smallest prime number (two)*/
	while (num % 2 == 0)
		num = num / 2;

	/* num must be odd so we proced to the next prime number (plus two)*/
	for (prmNu = 3; prmNu <= _sqrt(num); prmNu += 2)
	{
		while (num % prmNu == 0)
		{
			num = num / prmNu;
			largest = prmNu;
		}
	}

	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}

/**
 * main - entry point
 *
 * return: always 0 (success)
*/
int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}
