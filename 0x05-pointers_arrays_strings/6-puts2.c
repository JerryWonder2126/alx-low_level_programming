#include "main.h"

/**
 * puts2 - prints every other character in a string followed by newline
 *
 * @str: the string to be printed
 */
void puts2(char *str)
{
	int cnt = 0;

	do {
		_putchar(str[cnt]);
		cnt += 2;
	} while (str[cnt]);
	_putchar('\n');
}
