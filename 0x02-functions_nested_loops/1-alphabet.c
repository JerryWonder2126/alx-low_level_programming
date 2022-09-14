#include "main.h"

/**
 * print_alphabet - prints all lowercase alphabets in increasing order
 */
void print_alphabet(void)
{
	char x = 'a';

	for (; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
