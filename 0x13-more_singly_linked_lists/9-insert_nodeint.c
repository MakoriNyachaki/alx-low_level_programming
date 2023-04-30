#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: pointer to the first node
 * @idx: index
 * @n: new node position
 *
 * Return: address of the new node
 * NULL if it fails or node added at the beginning
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *cpNode = *head;
	unsigned int _node;

	newNode = malloc(sizeof(listint_t));


	newNode->n = n;

	if (!newNode)
		return (NULL);

	if (idx == 0)
	{
		newNode->next = cpNode;
		*head = newNode;
		return (newNode);
	}

	while (_node < (idx - 1))
	{
		if (cpNode == NULL || cpNode->next == NULL)
			return (NULL);
		cpNode = cpNode->next;
	}
	newNode->next = cpNode->next;
	cpNode->next = newNode;

	return (newNode);
}
