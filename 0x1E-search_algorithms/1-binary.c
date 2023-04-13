#include "search_algos.h"

void print_array(int *array, size_t start, size_t end);


/**
 * binary_search - searches for a value in a sorted array of integers
 *                 using the Binary search algorithm
 *
 * @array: the array to be searched
 * @size: the size of the array
 * @value: the value to be searched
 * Return: the index where value is located or -1 if value not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0;
	size_t end = size;
	size_t index = (end - start)/2;

	if (array == NULL)
		return (-1);

	while (index <= size)
	{
		print_array(array, start, end);
	        if (array[index] == value)
			return (index);
		else if (array[index] < value)
		{
			start = index;
			index = (end - start)/2 + index;
		}
		else
		{
			end = index;
			index = (end - start)/2;
		}
	}

	return (-1);
}

/**
 * print_array - prints every entries in an array
 *
 * @array: the array to be printed
 * @start: the index to start printing from
 * @end: the index to stop printing at
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i = start;

	while (i < end - 1)
		printf("%d, ", array[i++]);
	printf("%d\n", array[i]);
}
