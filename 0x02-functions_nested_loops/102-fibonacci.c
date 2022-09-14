#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the first 50 numbers fibonacci in series
 *
 * Return: 0 always
 */
int main(void)
{
	long b1, b2, b3;
	int n;

	b1 = 1;
	b2 = 2;

	printf("%ld, %ld, ", b1, b2);

	for (n = 2; n < 50; n++)
	{
		b3 = b2;
		b2 += b1;
		b1 = b3;

		printf("%ld", b2);
		if (n == 49)
			continue;
		printf(", ");
	}

	putchar('\n');

	return (0);
}
