#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc and returns pointer to memory
 *                  location, terminate the program with exit status 98 if
 *                  malloc fails
 *
 * @b: variable used to determine size of memory to be allocated
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(sizeof(b));
	if (s == NULL)
		exit(98);
	return (s);
}
