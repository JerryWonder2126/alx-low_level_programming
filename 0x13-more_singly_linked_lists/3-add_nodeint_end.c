#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a listint_t list
 *
 * @head: the first item in the list
 * @n: the integer used to create the node
 * Return: the newly created node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *h = *head;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (h != NULL)
	{

		while (h->next != NULL)
			h = h->next;

		h->next = new;
	}
	else
		h = new;

	return (new);
}
