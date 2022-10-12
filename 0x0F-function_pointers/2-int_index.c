#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *
 * @size: is the number of elements in the array
 * @array: the array to be worked on
 * @cmp: is a pointer to the function to be used to compare values
 * Return: the index of the first element for which the cmp function
 *         does not return 0. If no element matches, return -1
 *         If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array != NULL || cmp != NULL)
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
				return (i);
			i++;
		}
	}

	return (-1);
}
