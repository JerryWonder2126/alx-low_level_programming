#include <stdlib.h>
#include <stdio.h>

/**
 * main - This function prints all single numbers in base 10 seperated by " ,"
 *
 * Return: Always 0.
 */
int main(void)
{

	for (int num = 0; num <= 9; num++)
	{
	          putchar(num + '0');
	          if (num != 9)
	          {
		    putchar(',');
	                  putchar(' ');
	          }
	}

	putchar('\n');

	return (0);
}
