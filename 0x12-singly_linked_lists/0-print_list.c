#include "lists.h"

/**
 * print_list - prints the data in an object of type list_t
 *
 * @h: the list to be printed
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	char *empty_str = "(nil)";
	size_t i = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			_putchar('[');
			print_number(0);
			print_string("] ");
			print_string(empty_str);
		}
		else
		{
			_putchar('[');
			print_number(h->len);
			print_string("] ");
			print_string(h->str);
		}
		_putchar('\n');
		i++;
		h = h->next;
	}

	return (i);
}
