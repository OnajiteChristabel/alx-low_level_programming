#include "lists.h"

/**
<<<<<<< HEAD
 * listint_len - returns the number of elements
 * in a linked list
 * @h: head of a list
 * Return: numbers of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
=======
 * listint_len - lists
 * @h: node
 * Return: int
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
>>>>>>> 0c5e210b372a7aa5b1cda4cd853b06e8052f2679
}
