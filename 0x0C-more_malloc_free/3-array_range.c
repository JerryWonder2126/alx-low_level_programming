#include <stdlib.h>

/**
 * array_range - Creates an array of integers ordered
 *               from min to max, inclusive.
 * @min: The first value of the array.
 * @max: The last value of the array.
 *
 * Return: If min > max or the function fails - NULL.
 *         Otherwise - a pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int length, index;
	int *s;
	int minCopy;

	if (min > max)
		return (NULL);

	length = 0;
	for (index = min; index <= max; index++)
		length++;

	s = malloc(sizeof(int) * length);

	if (s == NULL)
		return (NULL);

	minCopy = min;
	index = 0;

	while (minCopy <= max)
		s[index++] = minCopy++;

	return (s);
}
