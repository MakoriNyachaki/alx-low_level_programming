#include "lists.h"

/**
 * free_list - frees a list list_t
 *
 * @head: pointer to the head of the node
 */

void free_list(list_t *head)
{
	if (!head)
		return (NULL);

	free_list(head->next);
	if (head->str)
		free(head->str);
	free(head);
}
