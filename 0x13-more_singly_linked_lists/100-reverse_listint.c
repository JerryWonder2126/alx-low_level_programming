#include "lists.h"

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next, *first = *head;

	prev = NULL;

	if (*head == NULL)
		return (NULL);
	if ((*head)->next != NULL)
	{
		while (first->next)
		{
		        next = first->next;
			first->next = prev;
			prev = first;
			if (next != NULL)
				first = next;
		}

	        first->next = prev;

		*head = first;
	}

	return (*head);
}
