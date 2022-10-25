#include "lists.h"

/**
 * sum_listint - sum
 * @head: node
 * Return: sum
 */

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
