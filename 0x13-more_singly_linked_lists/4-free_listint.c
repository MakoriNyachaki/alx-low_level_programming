#include "lists.h"

/**
 * free_listint - frees a list
 *
 * @head: first node
 */

void free_listint(listint_t *head)
{
	listint_t *tmpMem;

	while (head)
	{
		tmpMem = head->next;
		free(head);
		head = tmpMem;
	}
}
