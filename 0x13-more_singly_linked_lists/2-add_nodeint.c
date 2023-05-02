#include "lists.h"

/**
 * add_nodeint - adds a new node at the
 * beginning of listint_t
 *
 * @head: first node
 * @n: index
 *
 * Return: address of new element
 * or NULL if it failed
 *
 */

listint_t *add_nodeint(listint_t **head, int n)
{
	listint_t *nodeList;

	nodeList = malloc(sizeof(listint_t));

	return ((nodeList != NULL) ? (nodeList->n = n, nodeList->next =
			*head, *head = nodeList, nodeList) : (void) NULL);
}
