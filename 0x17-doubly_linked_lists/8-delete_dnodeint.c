#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 *
 * @head: the head of the list
 * @index: the index of the node
 * Return: 1 on success else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t count = 0;
	dlistint_t *copy = *head;
	dlistint_t *back, *front;

	if (*head == NULL)
		return (-1);

	while (*head != NULL && count < index)
	{
		*head = (*head)->next;
		count++;
	}

	back = (*head)->prev;
	front = (*head)->next;
	if (back != NULL)
		back->next = front;
	if (front != NULL)
		front->prev = back;

	free(*head);

	if (index == 0)
		*head = front;
	else
		*head = copy;

	return (1);
}
