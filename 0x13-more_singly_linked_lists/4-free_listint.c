#include "lists.h"

/**
 * free_listint - frees a listint_t list from memory
 *
 * @head: the first node in the list
 */
void free_listint(listint_t **head)
{
	listint_t *next, *h, *tmp;

	*h = *head;

	if (h != NULL)
	{

		next = h->next;

		while (next)
		{
			tmp = next->next;
			free(next);
			next = tmp;
		}
	}
}

