#include "lists.h"

/**
 * free_listint - frees nodes
 * @h: node
 */

void free_listint(listint_t *head)
{
	while (head->next != NULL)
	{
		free(head->n);
		head = head->next;
	}
	free(head);
}