#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @a: value 1
 * @b: value 2
 */
void swap_int(int *a, int *b)
{
	int c = *b;

	*b = *a;
	*a = c;
}
