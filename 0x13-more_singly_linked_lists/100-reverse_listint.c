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
	if (*head == NULL)
		return (NULL);
	stack < listint_t * > s;
	listint_t *now = *head;

	while (now != NULL)
	{
		s.push(now);
		now = now->next;
	}
	*head = s.top();
	s.pop();
	now = *head;
	while (!s.empty())
	{
		now = now->next;
		s.pop();
		now = now->next;
	}
	now = now->next;
	return (*head);
}
