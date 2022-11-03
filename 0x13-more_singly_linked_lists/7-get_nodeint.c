#include "lists.h"
<<<<<<< HEAD
/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head of a list
 * @index: index of the node
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
=======

/**
 * get_nodeint_at_index - node index
 * @head: node
 * @index: index
 * Return: ptr node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	node = head;
	while (i < index)
	{
		if (node == NULL)
			return (NULL);
		node = node->next;
		i++;
	}
	return (node);
>>>>>>> 0c5e210b372a7aa5b1cda4cd853b06e8052f2679
}
