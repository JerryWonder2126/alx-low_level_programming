#include "function_pointers.h"

/**
 * array_iterator - calls action on every element in array
 *
 * @array: array to be worked upon
 * @size: size of the array
 * @action: the callback to be called on the elements
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size--)
		action(*array++);

}
