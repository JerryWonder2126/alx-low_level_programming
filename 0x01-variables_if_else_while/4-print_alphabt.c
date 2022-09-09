#include <stdlib.h>
#include <stdio.h>

/**
 * main - This function prints all letters in lowercase
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
