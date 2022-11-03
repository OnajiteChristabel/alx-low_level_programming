<<<<<<< HEAD
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position
 * @head: head of a list
 * @idx: index of the list where the node is
 * added
 * @n: integer element
 * Return: NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *h;

	h = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && h != NULL; i++)
		{
			h = h->next;
		}
	}
	if (h == NULL && idx != 0)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = h->next;
		h->next = new;
	}
	return (new);
=======

#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: pointer to head pointer of linked list
 * @idx: index to insert new node
 * @n: new node's data
 * Return: address of new node, or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	unsigned int i = 0;
	listint_t *new_node, *tmp;

	/* account for empty pointer */
	if (head == NULL)
		return (NULL);

	/* malloc and set values for new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	/* account for idx 0 */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	/* iterate to 1 before nth index to insert */
	tmp = *head;
	while (i < (idx - 1))
	{
		tmp = tmp->next;
		i++;

		if (tmp == NULL) /* account for idx out of range */
		{
			free(new_node);
			return (NULL);
		}
	}

	/* link into list */
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
>>>>>>> 0c5e210b372a7aa5b1cda4cd853b06e8052f2679
}
