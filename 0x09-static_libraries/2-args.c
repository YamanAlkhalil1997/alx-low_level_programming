#include <stdio.h>
#include <stdlib.h>

/**
 * main-print sum of 2 number
 * @argc:number of comandline arguments
 * #argv:pointer to 
 * return:0
*/

int main(int argc, char *argv[])
{
	int sum;
	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		print("Error\n");
		return (1);
	}
}
