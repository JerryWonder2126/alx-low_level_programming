#include <stdlib.h>
#include <stdio.h>

/**
 * main - This function prints all single numbers in base 10
 *
 * Return: Always 0.
 */
int main(void)
{
        int num;

        num = 0;
  

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}

	putchar('\n');

	return (0);
}
