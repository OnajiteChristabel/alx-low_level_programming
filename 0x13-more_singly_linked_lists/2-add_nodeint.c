#include "lists.h"

/**
 * add_nodeint - add nore to jead
 * @head: node
 * @n: value
 * Return: pointer
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t)); /* create new node */
	if (new_node == NULL)
		return (NULL);

	new_node->n = n; /* set values */

	new_node->next = *head; /* first link new node to point to first node */
	*head = new_node; /* then switch list pointer to point to new node */

	return (new_node);
}
