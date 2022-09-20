#include "main.h"

/**
 * strlen - prints the length of a string
 *
 * @s: the string to be measured
 * Return: length of string
 */
int strlen(char *s)
{
	int x = 0;
	while (*s[x])
		x++;
	return (x);
}
