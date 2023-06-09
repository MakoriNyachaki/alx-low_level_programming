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
	list_t *n_node, tmp;
	int len;

	if (head == NULL || str == NULL)
		return (NULL);

	n_node = malloc(sizeof(list_t));

	if (n_node == NULL)
		return (NULL);

	n_node->str = strdup(str);
	if (n_node->str == NULL)
	{
		free(n_node);
		return (NULL);
	}

	n_node->next = NULL;

	if (*head == NULL)
	{
		*head = n_node;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = n_node;
	}
	return (n_node);
}
