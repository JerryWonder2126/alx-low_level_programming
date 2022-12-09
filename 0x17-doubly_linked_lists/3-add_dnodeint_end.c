#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a list
 *
 * @head: the head of the list
 * @n: the data to be used to form the object
 * Return: the address of the newly created object
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *hd;
	dlistint_t *copy;

	copy = *head; /* Just to keep track of the initial address of head */

	if (*head != NULL)
	{
		while ((*head)->next != NULL)
			*head = (*head)->next;
	}

	hd = malloc(sizeof(dlistint_t));
	if (hd == NULL)
		return (NULL);

	hd->n = n;
	hd->prev = *head;
	hd->next = NULL;
	if (*head != NULL)
	{
		(*head)->next = hd;
		*head = copy; /* Make head point back to initial address */
	}
	else
		*head = hd;

	return (hd);
}
