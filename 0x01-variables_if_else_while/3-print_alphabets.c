#include <stdlib.h>
#include <stdio.h>

/**
 * main - This function prints all letters in lowercase and uppercase
*/
int main(void)
{
	char letter;
	letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	letter = 'A';

	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
