#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the first 98 numbers in the fibonacci series
 *
 * Return: 0 always
 */
int main(void)
{
	unsigned long b1, b2, b3;
	int n;

	b1 = 1;
	b2 = 2;

	printf("%lu, %lu, ", b1, b2);

	for (n = 2; n < 98; n++)
	{
		b3 = b2;
		b2 += b1;
		b1 = b3;

		printf("%lu", b2);
		if (n == 97)
			continue;
		printf(", ");
	}

	putchar('\n');

	return (0);
}
