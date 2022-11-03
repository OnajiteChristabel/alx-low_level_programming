#include "lists.h"
<<<<<<< HEAD
/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	hnode = curr->n;

	h = curr->next;

	free(curr);
	*head = h;
	return (hnode);
=======

/**
 * pop_listint - pops
 * @head: node
 * Return: vales
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
>>>>>>> 0c5e210b372a7aa5b1cda4cd853b06e8052f2679
}
