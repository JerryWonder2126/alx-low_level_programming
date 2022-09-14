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
	unsigned int b1, b2, b3, sum;

	b1 = 1;
	b2 = 2;

	sum = b2;

	while (1)
	{
		
		b3 = b2;
		b2 += b1;
		b1 = b3;
		if (b2 > 4000000)
			break;
		if (b2 / 2)
			sum += b2;
	}

	printf("%d\n", sum);

	return (0);
}
