#include "lists.h"

/**
 * listint_len - lists
 * @h: node
 * Return: int
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (1);
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
