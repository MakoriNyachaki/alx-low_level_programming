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
	return ((head == NULL) ? 0 :
			head->n + sum_listint(head->next));
}
