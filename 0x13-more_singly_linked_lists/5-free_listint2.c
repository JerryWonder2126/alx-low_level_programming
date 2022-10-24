#include "lists.h"

/**
 * free_listint2 - frees a listint_t list from memory, sets the head to NULL
 *
 * @head: the first node in the list
 */
void free_listint2(listint_t **head)
{
	listint_t *next, *h, *tmp;

	h = *head;

	if (h != NULL)
	{

		next = h->next;

		while (next)
		{
			tmp = next->next;
			free(next);
			next = tmp;
		}

		h = NULL;
	}
}
