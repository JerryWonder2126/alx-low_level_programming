#include <stdlib.h>
#include <stdio.h>

/**
 * main - This function prints all possible mumbers in the base of 16
 */
int main(void)
{
	for (int num = 0; num <= 9; num++)
	{
	  putchar(num + '0');
	}

	for (char letter = 'a'; letter <= 'f'; letter++)
	{
	  putchar(letter);
	}

	/*

	letter = 'a';

	while (letter <= 'f' )
	{
		putchar(letter);
		letter++;
	}

	*/

	putchar('\n');

	return (0);
}
