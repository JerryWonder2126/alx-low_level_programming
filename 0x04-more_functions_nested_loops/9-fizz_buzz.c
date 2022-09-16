#include <stdlib.h>
#include <stdio.h>

/**
 * main - program entry point
 *
 * Return: 0 always
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (!(i % 3) && !(i % 5))
			fputs("FizzBuzz", stdout);
		else if (!(i % 5))
			fputs("Buzz", stdout);
		else if (!(i % 3))
			fputs("Fizz", stdout);
		else
			printf("%d", i);

		if (i == 100)
			break;

		putchar(' ');
	}

	putchar('\n');

	return (0);
}
