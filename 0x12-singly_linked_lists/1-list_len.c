#include "lists.h"

/**
 * list_len - returns the number
 * of elements in a linked list_t list.
 *
 * @h: list pointer
 *
 * Return: number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t p = 0;

	for(; h; p++)
	{
		h = h->next;
	}
	return (p);
}
