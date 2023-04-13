#include "search_algos"

size_t n_min(size_t num1, size_t num2);

/**
 * jump_list - searches for a value in a sorted list of integers using the Jump search algorithm.
 *
 * @list: the list to be traversed
 * @size: the length of the list
 * @value: the value to be searched for
 * Return: a pointer to the node where value is located
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int prev = 0;
	size step = sqrt(size);
	listint_t *head = list;

	if (head == NULL)
		return (-1);

	
	if (head->n < value)
	{
		printf("Value checked array[%d] = [%d]\n",
		       head->index, head->n);
	}

	while (head != NULL && (step + prev < size))
	{
		index = n_min(prev + step, size - 1);
		node = jump_to(head, index);
		if (node->n < value)
			printf("Value checked array[%d] = [%d]\n",
			       index, array[index]);
		else if (node->n >= value)
		{
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
 * jump - returns the element at the nth index of the list
 *
 * @head: the head of the list
 * @n: the nth index
 * Return: a pointer to the list at the nth index
 */
listint_t *jump_to(listint_t *head, int n)
{
	listint_t *tmp = head;
	while (tmp != NULL && tmp->index != n)
		tmp = tmp->next;

	return (tmp);
}
