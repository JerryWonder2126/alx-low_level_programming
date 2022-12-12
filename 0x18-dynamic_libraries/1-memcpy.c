#include "main.h"

/**
 * _memcpy - copy the first n bytes from src to dest
 *
 * @dest: the variable to be filled
 * @src: the variable used to do the filling
 * @n: amount of bytes to fill
 * Return: char always
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

