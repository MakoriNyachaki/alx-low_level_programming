#include "lists.h"

/**
 * reverse_listint - reverses a listint_t list
 *
 * @head: pointer to the first node
 *
 * Return: pointer to the first node
 * of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *p = NULL;

	if (!head || !(*head))
		return (NULL);

	if (!(*head)->next)
		return (*head);

	tmp = *head;
	while (1)
	{
		if (p)
		{
			p = tmp;
			tmp = tmp->next;
			p->next = *head;
			if (tmp)
			{
				*head = p;
			}
			else
			{
				tmp = p;
				break;
			}
		}
		else
		{
			p = *head;
			tmp = tmp->next;
			p->next = NULL;
			*head = p;
		}
	}
	*head = tmp;

	return (*head);
}
