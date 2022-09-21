#include "main.h"

/**
 * _puts2 - prints every other character in a string followed by newline
 *
 * @str: the string to be printed
 */
void _puts2(char *str)
{
	int cnt = 0;

	do {
		if (cnt % 2 == 0)
			_putchar(*str);
		cnt++;
	} while (*str++);
	_putchar('\n');
}
