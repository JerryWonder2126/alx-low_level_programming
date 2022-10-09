#include <stdlib.h>

/**
 * create_array - creates an allocated space to store an array of size 'size' and initializes it with char c
 *
 * @size: the size of the array
 * @c: the character used to fill the array
 * Return: NULL if size is negative, zero or if the function fails, else the allocated space created
 */
char *create_array(unsigned int size, char c)
{
	void *mem;
	char *filler;
	unsigned int i;

	if (size <= 0)
		return (NULL);

	mem = malloc(sizeof(char) * size);

	if (mem == NULL)
		return (NULL);

	filler = mem;
	for (i = 0; i < size; i++)
		filler[i] = c;

	return (mem);
}

