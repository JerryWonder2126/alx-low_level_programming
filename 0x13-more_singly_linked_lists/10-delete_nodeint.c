#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	listint_t *item, *copy = *head;
	unsigned int node;

	if (*head == NULL)
		return (-1);

	if (idx == 0)
	{
		*head = copy->next;
		free(copy);
		return (1);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
	}

	item = copy->next;
	copy->next = item->next;

	free(item);

	return (1);
}
