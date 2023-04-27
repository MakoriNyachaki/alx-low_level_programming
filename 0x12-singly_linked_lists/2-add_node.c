#include "lists.h"

/**
 * add_node - adds a new node at the
 * beginning of a list_t list
 *
 * @head: pointer to the first node
 * @str: string to add to
 *
 * Return: ptr to list_t
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t len;

	new_node = malloc(sizeof(list_t));

	if (new_node)
		for (len = 0; str[len]; len++)
			;
	
	new_node->len = len;

	new_node->str = strdup(str);
	if (!(*head))
		new_node->next = NULL;
	else
		new_node->next = *head;
	*head = new_node;

	return (*head);
}
