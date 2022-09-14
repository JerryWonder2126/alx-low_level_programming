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
	while (n != 98)
	{
		printf("%d, ", n);
		if (n < 98)
			n++;
		else if (n > 98)
			n--;
	}

	printf("98\n");
}
