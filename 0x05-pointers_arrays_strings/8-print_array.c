#include "main.h"

/**
 * print_array - print characters from an array
 *
 * @a: array to be printed
 * @n: number of characters to be printed from array
 */
void print_array(int *a, int n)
{
	int cnt = 1;

	print_number(a[0]);
	do {
		_putchar(',');
		_putchar(' ');
		print_number(a[cnt++]);
	} while (cnt < n);

	_putchar('\n');
}

/**
 * print_number - prints any integer to the screen
 *
 * @n: the integer to be printed to screen
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar(n % 10 + '0');
}
