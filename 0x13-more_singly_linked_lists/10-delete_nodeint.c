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
	int idx = 0;
	listint_t *new_node, *p = NULL;

	if (!(*head))
		return (-1);

	if (!index)
	{
		(*head) = (*head)->next;
		free(new_node);
		return (1);
	}

	new_node = *head;
	while (new_node)
	{
		if (idx == index)
		{
			p->next = new_node->next;
			free(new_node);
			return (1);
		}
		p = new_node;
		new_node = new_node->next;
		idx++;
	}
	return (-1);
}
