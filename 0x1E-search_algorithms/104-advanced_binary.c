#include "search_algos.h"

void print_array(int *array, size_t start, size_t end);


/**
 * advanced_binary - searches for a value in a sorted array of integers
 *                 using the Binary search algorithm
 *
 * @array: the array to be searched
 * @size: the size of the array
 * @value: the value to be searched
 * Return: the index where value is located or -1 if value not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t start = 0;
	size_t end = size - 1;
	size_t index;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		index = start + ((end - start) / 2);
		print_array(array, start, end);
		if (array[index] == value)
		{
			while (array[index - 1] == value)
				index--;
			return (index);
		}
		else if (array[index] < value)
			start = index + 1;
		else
			end = index - 1;
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

	printf("Searching in array: ");

	while (i < end)
		printf("%d, ", array[i++]);
	printf("%d\n", array[i]);
}
