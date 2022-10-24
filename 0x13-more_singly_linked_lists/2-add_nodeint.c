#include "lists.h"

/**
 * add_nodeint - adds a node to the beginning of a listint_t list
 *
 * @head: the first item in the list
 * @n: the integer used to create the node
 * Return: the newly created node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *h = *head;

	new->n = n;
	new->next = NULL;

	if (h != NULL)
		new->next = h;

	return (new);
}

