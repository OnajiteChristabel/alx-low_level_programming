#include "lists.h"

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
		if (node = NULL)
			return (NULL);
		node = node->next;
		i++;
	}
	return(node);
}
