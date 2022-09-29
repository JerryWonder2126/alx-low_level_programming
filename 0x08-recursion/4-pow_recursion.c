#include "main.h"

/**
 * factorial - prints the factorial of a number
 *
 * @x: the base number
 * @y: the power
 * Return: the factorial of a number
 */
int _pow_recursion(int x, int y)
{
	int l = 1;

	if (y < 0)
		return (-1);
	if (y)
		l = x * _pow_recursion(x, y - 1);

	return (l);
}
