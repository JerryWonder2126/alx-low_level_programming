#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 *                        using the Interpolation search algorithm
 *
 * @array: the array to be searched
 * @size: the size of the array (length)
 * @value: the value to be searched for
 * Return: the first index of the searched value
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t start = 0;
	size_t end = size - 1;
	size_t index;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		index = start + (((double)(end - start)
				  / (array[end] - array[start]))
				 * (value - array[start]));

		if (index >= size)
		{
			/* break loop if the index is greater than size  */
			printf("Value checked array[%lu] is out of range\n",
			       index);
			break;
		}
		else
			printf("Value checked array[%lu] = [%d]\n",
			       index, array[index]);

		if (array[index] == value)
			return (index);
		else if (array[index] < value)
			start = index + 1;
		else
			end = index - 1;
	}

	return (-1);
}
