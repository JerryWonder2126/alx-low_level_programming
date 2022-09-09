#include <stdlib.h>
#include <stdio.h>

/**
 * main - This function prints all single numbers in base 10
 */
int main(void)
{

	for (int num = 0; num <= 9; num++)
	{
		putchar(num%10 + '0');
	}

	putchar('\n');

	return (0);
}
