#include <stdlib.h>
#include <stdio.h>

/**
 * main - This function prints all letters in lowercase except q and e
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q')
			if (letter != 'e')
				putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
