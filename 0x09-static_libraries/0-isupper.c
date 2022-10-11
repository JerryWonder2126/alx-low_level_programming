#include "main.h"

/**
 * _isupper - checks if c is in uppercase
 *
 * @c: the character to be checked
 * Return: 1 if uppercase, else 0
 */
int _isupper(int c)
{
	if ('A' <= c && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
