#include "lists.h"

/**
 * free_listint_safe - frees a listint_t
 *
 * @h: head pointer
 *
 * Return: size of the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t num  = 0;
	listint_t *now = *h;

	if (!*h)
		return (NULL);
	while (*h)
	{
		now = *h;
		*h = (*h)->next;
		free(now);
		num++;
	}
	*h = NULL;
	return (num);
}
