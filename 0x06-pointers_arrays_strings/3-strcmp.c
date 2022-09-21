#include "main.h"

/**
 * _strcmp - compares two string
 *
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: integer always
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
