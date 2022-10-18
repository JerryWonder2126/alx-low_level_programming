#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all arguments given to it
 *                except the first one.
 *
 * @n: number of arguments passed to the function
 * Return: sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	va_start(ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
