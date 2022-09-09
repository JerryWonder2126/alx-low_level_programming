#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This function states if the last digit of n is zero
 * less than 6 or greater than 5
 *
 * Return: Always 0.
 */
int main(void)
{
	int n, ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;

	if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, ld);
	else if (n < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	else
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);

	return (0);
}
