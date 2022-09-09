#include <stdlib.h>
#include <stdio.h>

/**
 * main - This function prints all letters in lowercase
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}

	putchar('\n');

	return (0);
}
