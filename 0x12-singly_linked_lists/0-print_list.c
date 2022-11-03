#include "lists.h"
<<<<<<< HEAD
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - prints the lists
 * @h: singly linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nelem = 0;
=======

/**
 * print_list - prints all elements of list_t list
 * @h: linked list
 * Return: number of nodes in linked list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
>>>>>>> 0c5e210b372a7aa5b1cda4cd853b06e8052f2679

	while (h != NULL)
	{
		if (h->str == NULL)
<<<<<<< HEAD
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		nelem++;
	}
	return (nelem);
=======
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		count++;
		h = h->next;
	}

	return (count);
>>>>>>> 0c5e210b372a7aa5b1cda4cd853b06e8052f2679
}
