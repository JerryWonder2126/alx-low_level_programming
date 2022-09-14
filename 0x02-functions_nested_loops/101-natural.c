#include <stdio.h>

/**
 * main - prints the sum of all multiples of 3 or 5 up to 1024 (excluded)
 *
 * Return: 0 always
 */
int main(void)
{
	int n, s;

	for (n = 3; n < 1024; n++)
	{
		if (!(n % 3) || !(n % 5))
			s += n;
	}

	printf("%d\n", s);

	return (0);
}
