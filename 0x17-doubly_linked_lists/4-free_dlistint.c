#include "lists.h"

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	{
		return;
	}
	head = head->next;
	while (head != NULL)
	{	
		head = head->next;
		free(head->prev);
	}
	free (head);
}
