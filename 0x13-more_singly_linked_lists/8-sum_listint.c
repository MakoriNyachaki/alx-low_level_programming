#include "lists.h"

/**
 * sum_listint - sum of all the data of a listint_t
 *
 * @head: pointer to the first node
 *
 * Return: 0 or sum
 *
 */

int sum_listint(listint_t *head)
{
	int total = 0;

	if (head)
	{
		while (head)
		{
			total = total + (head->next);
			head = head->next;
		}
	}
	else
		return (0);

	return (total);
}
