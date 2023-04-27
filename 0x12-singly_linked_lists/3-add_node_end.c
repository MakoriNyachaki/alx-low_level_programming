#include "lists.h"

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
	list_t *tmp = *head;
	unsigned int len;

	for (len = 0; str[len]; len++)
		;

	new_node - malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	for (; tmp->next; tmp = tmp->next)
		;

	tmp->next = new_node;

	return (new_node);
}

