#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 *
 * @head: first node
 * @n: index
 *
 * Return: the address of new element
 * or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *tmpMem = *head;

	newNode = malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head)
	{
		while (tmpMem->next)
			tmpMem = tmpMem->next;
		tmpMem->next = newNode;
	}
	else
	{
		*head = newNode;
		return (newNode);
	}
	return (newNode);
}
