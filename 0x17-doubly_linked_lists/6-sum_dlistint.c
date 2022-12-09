#include "lists.h"

/**
 * sum_dlistint - adds all the number in a list together
 *
 * @head: the head of the list
 * Return: the sum of the data, if list is empty then 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
