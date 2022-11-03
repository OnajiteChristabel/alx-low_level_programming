#include "lists.h"
<<<<<<< HEAD
/**
 * print_listint - prints all the element of a list
 * @h: head of a list
 * Return: numbers of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}
	return (nnodes);
=======

/**
 * print_listint - prints all elements of a list
 * @h: list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n); /* autofills 0 if no int value given */

		num_nodes += 1;
		h = h->next;
	}

	return (num_nodes);
>>>>>>> 0c5e210b372a7aa5b1cda4cd853b06e8052f2679
}
