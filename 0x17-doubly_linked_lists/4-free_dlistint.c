#include "lists.h"

/**
 * free_dlistint -  frees a dlistint object
 *
 * @head: head of the list to be freed
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
