#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 *
 * @head: pointer to the node at the first index
 * @index: node index
 *
 * Return: 1 if successful or -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		listint_t *t = *head;
		*head = (*head)->next;
		free(k);
		return (1);
	}
	return (delete_nodeint_at_index(&(head)->next, index - 1));
}
