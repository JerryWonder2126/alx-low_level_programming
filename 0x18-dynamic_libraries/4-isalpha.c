#include "main.h"

/**
 * _isalpha - checks if c is an alphabet or number
 *
 * @c: the character to be checked
 * Return: 1 if alphabet or number, else 0
 */
int _isalpha(int c)
{
	if ('A' <= c && c <= 'z')
	{
		return (1);
	}

	return (0);
}
