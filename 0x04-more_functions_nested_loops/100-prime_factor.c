#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the largest prime factor of 612852475143
 *
 * Return: 0 always
 */
int main(void)
{
	unsigned long long i;
	int n = 2;

	i = 612852475143;

	while (i > 1)
	{
		if (i % n)
			n++;
		else
			i /= n;
	}

	printf("%d\n", n);

	return (0);
}
