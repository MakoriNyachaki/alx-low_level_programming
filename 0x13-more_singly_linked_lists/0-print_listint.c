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
	size_t nodeList = 0;

	if (h == NULL)
	{
		return (0);
	}
	printf("%d\n", h->n);
	return (1 + print_listint(h->next));
}
