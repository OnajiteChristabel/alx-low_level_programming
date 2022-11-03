#include "lists.h"
<<<<<<< HEAD
/**
 * add_nodeint - add a new node at the beginning
 * of a linked list
 * @head: head of a list
 * @n: n element
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
=======

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to head pointer of linked list
 * @n: data to add to new node
 * Return: address of new element, or NULL if failed
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
>>>>>>> 0c5e210b372a7aa5b1cda4cd853b06e8052f2679
