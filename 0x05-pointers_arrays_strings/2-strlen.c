#include "main.h"

/**
 * _strlen - prints the length of a string
 *
 * @s: the string to be measured
 * Return: length of string
 */
int _strlen(char *s)
{
	int x = 0;

	while (*s[x])
		x++;
	return (x);
}
