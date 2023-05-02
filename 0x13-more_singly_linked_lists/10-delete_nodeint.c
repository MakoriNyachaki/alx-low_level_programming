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
	unsigned int n;

	if (*head == NULL)
		return (-1);
	listint_t *ear = NULL, *now = *head;

	switch (index)
	{
		case 0:
			*head = now->next;
			free(now);
			return (1);
		default:
			for (n = 0; n < index; n++)
			{
				if (now == NULL)
					return (-1);
				ear = now;
			}
}
