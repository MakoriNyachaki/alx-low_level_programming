#include "lists.h"

/**
 * insert_nodeint - inserts a new node at a given position
 *
 * @head: pointer to the first node
 * @idx: index
 * @n: new node position
 *
 * Return: address of the new node
 * NULL if it fails or node added at the beginning
 */

listint_t *insert_nodeint(listint_t **head, unsigned int idx, int n)
{
	if (idx == 0)
	{
		lisint_t *new_node = malloc(sizeof(listint_t));

		if (new_node == NULL)
		{
			return (NULL);
		}
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	else if (*head == NULL)
	{
		return (NULL);
	}
	else
	{
		return (insert_nodeint(&((*head)->next), idx - 1, n));
	}
}

/**
 * insert_nodeint_at_index - inserts a new
 * node at a given position
 *
 * @head: pointer to the first node
 * @idx: index
 * @n: position of new node
 *
 * Return: NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	if (idx == 0)
	{
		listint_t *new = malloc(sizeof(listint_t));

		if (new == NULL)
		{
			return (NULL);
		}
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	else
	{
		return (insert_nodeint(head, idx - 1, n));
	}
}
