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
	unsigned int b1, b2, b3, sum, MAX_NUM;

	MAX_NUM = 4000000;

	b1 = 1;
	b2 = 2;

	sum = b2;

	while (1)
	{
		b3 = b2;
		b2 += b1;
		b1 = b3;
		if (b2 > MAX_NUM)
			break;
		if (b2 % 2 == 0)
			sum += b2;
	}

	printf("%u\n", sum);

	return (0);
}
