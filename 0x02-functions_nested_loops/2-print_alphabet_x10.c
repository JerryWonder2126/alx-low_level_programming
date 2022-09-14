#include "main.h"

/**
 * print_alphabet_x10 - prints all alphabets in lowercase, in increasing order, 10 times.
 */
void print_alphabet_x10(void)
{
	int i = 0;
	for (; i <= 9; i++)
	{
		print_alphabet();
	}
}

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
