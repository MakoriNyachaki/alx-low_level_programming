#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a listint_t linked list, and returns
 * the head node’s data (n)
 *
 * @head: pointer to the first node
 *
 * Return: the head node's data(n)
 * or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	int newNode;
	listint_t *_node;

	if (!(*head))
		return (0);

	_node = (*head)->next;
	newNode = (*head)->n;
	free(*head);
	*head = _node;

	return (newNode);
}

