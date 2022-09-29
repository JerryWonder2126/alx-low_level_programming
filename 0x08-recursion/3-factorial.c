#include "main.h"

/**
 * factorial - prints the factorial of a number
 *
 * @n: the number to be calculated
 * Return: the factorial of a number
 */
int factorial(int n)
{
	int l = 1;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	l = n * factorial(n - 1);

	return (l);
}
