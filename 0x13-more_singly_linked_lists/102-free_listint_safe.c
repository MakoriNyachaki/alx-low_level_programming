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
	size_t count = 0;
	listint_t *current = *h;

	if (!*h)
		goto exit;
	while (*h)
	{
		current = *h;
		*h = (*h)->next;
		free(current);
		count++;
	}
	*h = NULL;
	return (count);
}
