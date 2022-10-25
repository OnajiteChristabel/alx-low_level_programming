#include "lists.h"

int sum_listint(listint_t *head)
{
	int i = 0;
	listint_t *temp;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		i += temp->n
		temp = temp->next;
	}
	free(temp);
	return (i);
}
