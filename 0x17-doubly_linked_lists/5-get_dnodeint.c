#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node at a particular index
 *
 * @head: the head of the list
 * @index: the index to be returned
 * Return: the object at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count = 0;
	dlistint_t *copy = head;

	if (head == NULL)
		return (NULL);

	while (copy && count < index)
	{
		copy = copy->next;
		count++;
	}

	if (count != index)
		return (NULL);

	return (copy);
}
