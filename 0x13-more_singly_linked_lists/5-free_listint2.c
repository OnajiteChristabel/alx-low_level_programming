#include "lists.h"
<<<<<<< HEAD
/**
 * free_listint2 - frees a linked list
 * @head: head of a list
 * Return: no return
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
=======

/**
 * free_listint2 - free list
 * @head: node
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
	free(*head);
>>>>>>> 0c5e210b372a7aa5b1cda4cd853b06e8052f2679
}
