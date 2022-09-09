#include <stdlib.h>
#include <stdio.h>

/**
 * main - This function prints all single digit numbers in base 10
 *
 * Return: Always 0.
 */
int main(void)
{
	char num;
	num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	putchar('\n');

	return (0);
}
