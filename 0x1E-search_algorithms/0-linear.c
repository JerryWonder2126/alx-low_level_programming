#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using
 *                 the Linear search algorithm
 *
 * @array: the array to be searched
 * @size: the size of the array
 * @value: the value to be searched
 * Return: the first index where value is found in array
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
