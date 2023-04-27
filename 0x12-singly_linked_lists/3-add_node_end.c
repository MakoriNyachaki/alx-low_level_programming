#include "lists.h"

/**
 * _node - creates a new node
 *
 * @str: what to add to the node
 *
 * Return: ptr to list_t
 */

list_t *_node(const char *str)
{
	list_t new_node;
	size_t n;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);
	for (n = 0; str[n]; n++)
		;

	new_node->str = strdup(str);
	new_node->n = n;
	new_node->next = NULL;
	return (new_node);
}

/**
 * add_node_end -  adds a new node at
 * the end of a list_t list
 *
 * @head: first node
 * @str: string to add node to
 *
 * Return: NULL if address is null
 */

list_t *add_node_end(list_t **head, char *str)
{
	list_t *new_node;

	if (!(head))
	{
		*head = _node(str);
		return (*head);
	}
	if (*head->next)
	{
		add_node_end(&(*head)->next, str);
	}
	else
	{
		new_node = _node(str);
		new_node->next = (*head)->next;
		(*head)->next = new_node;
	}
	return (*head);
}

