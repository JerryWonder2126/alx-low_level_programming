#include "lists.h"

/**
 * dlistint_len - returns the length of the linked list object
 *
 * @h: the list object
 * Return: the length of the list object
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
