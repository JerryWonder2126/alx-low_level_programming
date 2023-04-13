#include "search_algos.h"

size_t n_min(size_t num1, size_t num2);
void print_array(int *array, size_t start, size_t end);
int m_binary_search(int *array, int start, int end, int value);

/**
 * exponential_search - searches for a value in a sorted array of
 *                        integers using the Exponential search algorithm
 *
 * @array: the array to be searched
 * @size: the size of the array (length)
 * @value: the value to be searched for
 * Return: the first index of the searched value
 */
int exponential_search(int *array, size_t size, int value)
{
	int end = size - 1;
	int index = 1;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	while (index <= end && array[index] < value)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		index *= 2;
	}

	if (index <= end)
		end = index;

	printf("Value found between indexes [%d] and [%d]\n", index / 2, end);

	return (m_binary_search(array, (index / 2), n_min(index, end), value));
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

/**
 * m_binary_search - searches for a value in a sorted array of integers
 *                 using the Binary search algorithm
 *
 * @array: the array to be searched
 * @start: the index to start searching from
 * @end: the index to stop searching at
 * @value: the value to be searched
 * Return: the index where value is located or -1 if value not found
 */
int m_binary_search(int *array, int start, int end, int value)
{
	int index;

	while (start <= end)
	{
		index = start + ((end - start) / 2);
		print_array(array, start, end);
		if (array[index] == value)
			return (index);
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
