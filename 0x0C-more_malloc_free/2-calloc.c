#include "main.h"

/**
 * *_memst - fills memory with a constact
 * @s: pointer to put the cosn
 * @b: scontant
 * @n: max bytes to use
 * return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;

	return (ptr);
}
/**
 * *_calloc - allocates memlory for an array
 * @nmemb: array length
 * @size: size of each element
 * return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
		return (NULL);

	_memset(m, 0, sizeof(int) * nmemb);

	return (m);
}
