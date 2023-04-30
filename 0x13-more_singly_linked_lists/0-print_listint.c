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
	int nodeList = 0;

	if (h)
	{
		for (; h; nodeList++)
		{
			printf("%d\n", h->n);
			h = h->next;
		}
	}
	else
		return (0);

	return (nodeList);
}
