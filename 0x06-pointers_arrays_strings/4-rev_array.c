#include "main.h"

/**
 * reverse_array - reverse the order of integers in an array of integers
 *
 * @a: the array to be reversed
 * @n: the size of the array
 */
void reverse_array(int *a, int n)
{
	int len = 0;
	int index = 0;
	int tmp;

	while (s[index++])
		len++;

	index = n - 1;
	while (index >= n / 2)
	{
		tmp = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = tmp;
		index--;
	}
}
