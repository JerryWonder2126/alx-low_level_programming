#include "main.h"

/**
 * _memset - add b to s in the first n bytes
 *
 * @s: the variable to be filled
 * @b: the variable used to do the filling
 * @n: amount of bytes to fill
 * Return: char always
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
	}

	return (s);
}

