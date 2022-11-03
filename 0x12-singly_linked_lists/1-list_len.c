#include "lists.h"
<<<<<<< HEAD
/**
 * list_len - returns the number of elements in a list
 * @h: singly linked list
 * Return: the number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{
		h = h->next;
		nelem++;
	}
	return (nelem);
=======

/**
 * list_len - prints length of list_t linked list
 * @h: linked list
 * Return: number of nodes/elements (length) in linked list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
>>>>>>> 0c5e210b372a7aa5b1cda4cd853b06e8052f2679
}
