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
	list_t *new_node, tmp;
	int len;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);
	while (str[len])
		len++;

	new_node->str = strdup(str);
	new_node->len = len;

	if (!(*head))
	{
		new_node->next = NULL;
		tmp = *head;
		while (!(tmp->next))
			tmp = tmp->next;
		tmp->next = new_node;
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
	}

	return (new_node);
}


