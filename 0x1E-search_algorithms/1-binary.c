#include "search_algos.h"

void print_array(int *array, size_t start, size_t end);


/**
 * binary_search - searches for a value in a sorted array of integers
 *                 using the Binary search algorithm
 *
 * @array: the array to be searched
 * @size: the size of the array
 * @value: the value to be searched
 * Return: the index wher value is located
 */
int binary_search(int *array, size_t size, int value)
{
	/* let index = array/2; */
	/* start = 0; */
	/* end = size; */
	/* index = (end - start) / 2; */
	/* Check if the element at index is equal to value; */
	/* return value; */
	/* else check if value is greater, if greater; */
	/* start = index; */
	/* else check if value is lower, if lower; */
	/* end = index; */
	/* back to the beginning; */

	size_t start = 0;
	size_t end = size;
	size_t index = (end - start)/2;

	if (array == NULL)
		return (-1);

	while (index > 1 && index < end - 1)
	{
		/* print_array(array, start, end);*/
		printf("%lu\n", index);
		if (array[index] == value)
			return (index);
		else if (array[index] < value)
			index = ((end - index)/2) + index;
		else
			index = (index - start)/2;
	}

	return (-1);
}

void print_array(int *array, size_t start, size_t end)
{
	size_t i = start;

	while (i < end - 1)
		printf("%d, ", array[i++]);
	printf("%d\n", array[i]);
}
