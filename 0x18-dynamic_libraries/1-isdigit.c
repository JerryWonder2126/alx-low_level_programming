#include "main.h"

/**
 * _isdigit - checks if c is a digit
 *
 * @c: the character to be checked
 * Return: 1 if digit, else 0
 */
int _isdigit(int c)
{
	if ('0' <= c && c <= '9')
	{
		return (1);
	}

	return (0);
}
