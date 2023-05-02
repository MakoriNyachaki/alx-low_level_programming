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

	while (h != NULL)
	{
		printf("%d\n", (*h)->n);
		h = h->next;
		nodeList += (h != NULL) ? 1 : 0;
	}
	return (nodeList);
}
