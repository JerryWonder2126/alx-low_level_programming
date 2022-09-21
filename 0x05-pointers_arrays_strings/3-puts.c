#include "main.h"

/**
 * _puts - prints a string followed by newline
 *
 * @str: the string to be printed
 */
void _puts(char *str)
{
	do
		_putchar(*str);
	while (*str++);
	_putchar('\n');
}
