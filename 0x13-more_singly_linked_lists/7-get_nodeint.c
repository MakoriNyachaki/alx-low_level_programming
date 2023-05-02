#include "lists.h"

/**
 * get_nodeint_at_index - returns the
 * nth node of a linked_t linked list
 *
 * @head: pointer to the first node
 * @index: index of nth node
 *
 * Return: NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	return (head == NULL || index == 0) ? head:
		get_nodeint_at_index(head->next, index - 1);
}
