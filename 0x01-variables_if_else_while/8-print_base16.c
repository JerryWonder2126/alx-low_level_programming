#include <stdlib.h>
#include <stdio.h>

/**
 * main - This function prints all possible mumbers in the base of 16
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;
	char letter;

	num = 0;
	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}

	letter = 'a';

	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}


	putchar('\n');

	return (0);
}
