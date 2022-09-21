#include "main.h"

/**
 * puts2 - prints every other character in a string followed by newline
 *
 * @str: the string to be printed
 */
void puts2(char *str)
{
	int cnt = 0;
	int len = 0;

	while (str[cnt++])
		len++;

	cnt = 0;

	while (str[cnt] && cnt < len)
	{
		_putchar(str[cnt]);
		cnt += 2;
	}
	_putchar('\n');
}
