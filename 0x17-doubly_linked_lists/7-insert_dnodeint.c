#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at an index
 *
 * @h: the head of the list
 * @idx: index to do the insertion
 * @n: the data to be used to form the object
 * Return: the address of the object added
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *hd;
	size_t count = 0;
	dlistint_t *copy = *h;

	while (*h != NULL && count < idx)
	{
		*h = (*h)->next;
		count++;
	}

	if (idx == 0)
		hd = add_dnodeint(&copy, n);
	else if (count != idx)
		return (NULL);
	else if (*h == NULL)
		hd = add_dnodeint_end(&copy, n);
	else
	{
		hd = malloc(sizeof(dlistint_t));
		if (hd == NULL)
			return (NULL);

		hd->n = n;
		hd->next = *h;
		hd->prev = (*h)->prev;
		(*h)->prev->next = hd;
		(*h)->prev = hd;

		*h = copy;
	}

	return (hd);
}
