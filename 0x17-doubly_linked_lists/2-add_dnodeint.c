#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of the object
 *
 * @head: the head of the list object
 * @n: the data to be used to form the object
 * Return: the address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *hd;

	hd = malloc(sizeof(dlistint_t));
	if (hd == NULL)
		return (NULL);

	hd->n = n;
	hd->prev = NULL;
	hd->next = *head;
	if (*head != NULL)
		(*head)->prev = hd;
	*head = hd;

	return (hd);
}
