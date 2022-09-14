#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_to_98 - print up/down to 98
 *
 * @n: the number to start from
 */
void print_to_98(int n)
{
	printf("%d", n);

	if (n != 98)
		printf(", ");

	if (n > 98)
		print_to_98(--n);
	else if (n < 98)
		print_to_98(++n);
}
