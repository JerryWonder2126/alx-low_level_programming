#include "search_algos.h"

size_t n_min(size_t num1, size_t num2);

/**
 * jump_search - searches for a value in a sorted array
 *               of integers using the Jump search algorithm
 *
 * @array: the array to be searched
 * @size: the size of the array (length)
 * @value: the value to be searched for
 * Return: the first index of the searched value
 */
int jump_search(int *array, size_t size, int value)
{
	size_t prev = 0;
	size_t step = sqrt(size);
	int index;
	int i;

	if (array == NULL)
		return (-1);

	if (array[prev] <= value)
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);

	while (step + prev < size)
	{
		index = n_min(prev + step, size);
		if (array[index] < value)
		{
			printf("Value checked array[%d] = [%d]\n",
			       index, array[index]);
		}
		else if (array[index] >= value)
		{
			printf("Value found between indexes [%lu] and [%d]\n",
			       prev, index);
			for (i = prev; i <= index; i++)
			{
				printf("Value checked array[%d] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
			}
		}

		prev += step;
	}

	return (-1);
}


/**
 * n_min - returns the minimum out of two numbers
 *
 * @num1: the first number to be checked
 * @num2: the second number to be checked
 * Return: the lower number
 */
size_t n_min(size_t num1, size_t num2)
{
	if (num1 > num2)
		return (num2);
	return (num1);
}
