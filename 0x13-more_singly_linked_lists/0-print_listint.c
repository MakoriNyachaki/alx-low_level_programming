#include "lists.h"

/**
 * print_listint - prints all elements of listint_t
 *
 * @h: pointer to list
 *
 * Return: number of nodes
 */

size_t print_listint(cons listint_t *h)
{
	size_t _node = 0;

	if (!h)
		return (0);

	for (; h; _node++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (_node);
}
