#include <stdlib.h>
#include <stdio.h>

/**
 * main - This function prints all letters in lowercase and uppercase
 *
 * Return: Always 0.
 */
int main(void)
{
        char letter, ltr;
	letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	ltr = 'A';

	while (ltr <= 'Z')
	{
		putchar(ltr);
		ltr++;
	}

	putchar('\n');

	return (0);
}
