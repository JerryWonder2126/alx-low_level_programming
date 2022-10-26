#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given
 *                           index of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @idx: The index of the node to be deleted - indices start at 0.
 *
 * Return: On success - 1.
 *         On failure - -1.
 */
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
