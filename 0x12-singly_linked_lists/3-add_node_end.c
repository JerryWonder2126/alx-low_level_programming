#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 *
 * @head: The fist node in a list_t list.
 * @str: the string to be used to create a new node
 * Return: The added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *next;

	next = *head;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (next->next != NULL)
		next = next->next;

	next->next = new;

	return (new);
}
