#include "lists.h"

/**
 * free_list - frees a list list_t
 *
 * @head: pointer to the head of the node
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
