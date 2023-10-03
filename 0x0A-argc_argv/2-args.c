#include <stdio>

/**
 * main - print
 * @argc: int
 * @arvg: list
 * return 0
*/

int main(int argc, char const *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
