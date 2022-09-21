#include "main.h"

/**
 * print_rev - prints a string in reverse order followed by newline
 *
 * @s: the string to be printed
 */
void print_rev(char *s)
{
	int len = 0;
	int index = 0;

	while (s[index++])
		len++;
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}

	_putchar('\n');
}
