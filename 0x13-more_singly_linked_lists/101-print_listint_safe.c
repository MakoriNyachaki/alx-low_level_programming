#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 *
 * @head: pointer to the first node
 *
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	if (head == NULL)
		exit(98);

	printf("[%p] %d\n", (void *) head, head->n);

	if (head <= head->next)
	{
		printf("-> [%p] %d\n", (void *) head->next, head->next->n);
		return (1);
	}
	return (1 + print_listint_safe(head->next));
}
