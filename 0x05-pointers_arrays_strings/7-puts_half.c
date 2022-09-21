#include "main.h"

/**
 * _puts_half - prints the last half of a string followed by newline
 *              if string length is odd prints the last n characters in string
 *              where n = (len - l) / 2
 *
 * @str: the string to be printed
 */
void _puts_half(char *str)
{
	int cnt = 0;
	int index = 0;
	int len = 0;

	while (str[index++])
		len++;

	index = len - 1;

	do {
		_putchar(str[index]);
		index--;
		cnt++;
	} while (cnt < len / 2);
	_putchar('\n');
}
