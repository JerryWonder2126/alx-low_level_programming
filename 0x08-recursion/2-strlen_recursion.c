#include "main.h"

/**
 * _strlen_recursion - prints the length string to screen
 *
 * @s: the string to be printed
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (!*s)
		return(0);
	l = _strlen_recursion(s + 1);
	return (l + 1);
}
