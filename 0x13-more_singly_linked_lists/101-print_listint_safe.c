#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 *
 * @head: pointer to the first node
 *
 * Return: number of nodes in the list
 */

size_t print_listint_safe(cons listint_t *head)
{
	size_t qty = 0;
	const listint_t *now;

	for (now = head; now != NULL; now = now->next, qty++)
	{
		printf("[%p] %d\n", (void *) now, now->n);
		if (now <= now->next)
		{
			printf("-> [%p] %d\n", (void *) now->next, now->next->n);
			break;
		}
	}
	return (qty);
}
