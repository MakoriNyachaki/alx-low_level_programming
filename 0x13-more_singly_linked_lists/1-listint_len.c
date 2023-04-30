#include "lists.h"

/**
 * listint_len - returns the number of
 * elements in a linked list
 *
 * @h: pointer to the first node
 *
 * Return: number of elements
 *
 */

size_t listint_len(const listint_t *h)
{
	size _t nodeList = 0;

	while (h)
	{
		nodeList++;
		h = h->next;
	}
	return (nodeList);
}
