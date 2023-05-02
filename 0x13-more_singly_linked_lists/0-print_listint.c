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

	do
	{
		printf("%d\n", h->n);
		nodeList++;
		h = h->next;
	}
	while (h);

	return (nodeList);
}
