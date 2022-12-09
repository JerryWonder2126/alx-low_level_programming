#include "lists.h"

/**
 * print_dlistint - prints the data of a list object to screen
 *
 * @h: the list object to be printed
 * Return: the length of the list object
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
