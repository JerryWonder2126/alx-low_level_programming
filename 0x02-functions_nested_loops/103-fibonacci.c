#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the sum of the even value numbers from fibonacci in series
 * with maximum number of 4,000,000
 *
 * Return: 0 always
 */
int main(void)
{
	long b1, b2, b3, sum, n;

	b1 = 1;
	b2 = 2;

	sum = b2;

	for (n = 2; n < 4000000; n++)
	{
		b3 = b2;
		b2 += b1;
		b1 = b3;
		if (b2 / 2)
			sum += b2;
	}

	printf("%ld\n", sum);

	return (0);
}
