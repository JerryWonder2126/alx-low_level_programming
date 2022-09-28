#include "main.h"

/**
 * _puts_recursion - prints string to screen
 *
 * @s: the string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
		_putchar('\n');
}
