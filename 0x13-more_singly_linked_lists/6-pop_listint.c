#include "lists.h"

/**
 * pop_listint - pops
 * @head: node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int re;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (0);
	temp = *head;
	re = temp->n;
	*head = temp->next;
	free(temp);
	return (re);
}