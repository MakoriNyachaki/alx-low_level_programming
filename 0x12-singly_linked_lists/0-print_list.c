#include "lists.h"

/**
 * print_list - print all elements of a list
 *
 * @h: list pointer
 *
 * Return: elements in the list
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	for (; h ; n++)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
	}
	return (n);
}
