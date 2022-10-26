#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at index
 *
 * @head: the first node in the list
 * @idx: position to insert new node
 * @n: data used to create new node
 * Return: the newly created node or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *next, *tmp, *new;
	unsigned int i = 0;
	size_t length = list_len(*head);

	if (idx == 0)
		return (add_node(head, n));
        else if (idx >= (length - 1))
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL || *head == NULL)
		return (NULL);

	tmp = *head;

	while (i < (idx - 1) && tmp)
	{
		tmp = tmp->next;
		i++;
	}

	if (i < (idx  - 1))
	{
		free(new);
		return (NULL);
	}

	next = tmp->next;
	tmp->next = new;
	new->next = next;
	new->n = n;

	return (new);
}

/**
 * add_node - adds a node to the beginning of a listint_t list
 *
 * @head: the first item in the list
 * @n: the integer used to create the node
 * Return: the newly created node
 */
listint_t *add_node(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}

/**
 * add_nodeend - adds a node to the end of a listint_t list
 *
 * @head: the first item in the list
 * @n: the integer used to create the node
 * Return: the newly created node
 */
listint_t *add_nodeend(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (new);
}

/**
 * list_len - determines the number of nodes in a listint object
 *
 * @h: the listint object
 * Return: the number of nodes in the listint object
 */
size_t list_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
